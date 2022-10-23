/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboulgh <oaboulgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:35:45 by oaboulgh          #+#    #+#             */
/*   Updated: 2022/10/23 08:42:08 by oaboulgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_of_int(long int i)
{
	int	k;

	k = 0;
	if (i == 0)
		k = 1;
	if (i < 0)
	{
		i *= -1;
		k = 1;
	}
	while (i > 0)
	{
		i = i / 10;
		k++;
	}
	return (k);
}

// static	char	*rev_print(char *str)
// {
// 	int		i;
// 	int		len;
// 	char	tmp;

// 	i = 0;
// 	len = ft_strlen(str) - 1;
// 	while (len > i)
// 	{
// 		tmp = str[i];
// 		str[i] = str[len];
// 		str[len] = tmp;
// 		i++;
// 		len--;
// 	}
// 	return (str);
// }

static char	*ft_rtn(char *s)
{
	s[0] = 48;
	return (s);
}

char	*ft_itoa(int n)
{
	int					i;
	char				*result;
	long int			res;

	i = len_of_int(n);
	res = n;
	result = (char *)(malloc(sizeof(char) * (i + 1)));
	if (!result)
		return (0);
	result[i--] = '\0';
	if (n == 0)
		return (ft_rtn(result));
	if (n < 0)
	{
		result[0] = '-';
		res *= -1;
	}
	while (res >= 1)
	{
		result[i] = 48 + (res % 10);
		res = res / 10;
		i--;
	}
	return (result);
}
