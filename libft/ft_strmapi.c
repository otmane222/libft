/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboulgh <oaboulgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:54:42 by oaboulgh          #+#    #+#             */
/*   Updated: 2022/10/23 12:02:32 by oaboulgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*string;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (0);
	string = (char *)s;
	string = (char *)(malloc(sizeof(char) * ft_strlen(s) + 1));
	if (!string)
		return (0);
	while (s[i])
	{
		string[i] = (*f)(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
/*
char	ft_to_lower(unsigned int i, char c)
{
	(void)i;
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

char	ft_to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

int	main(void)
{
	char arr[] = "HELLO WORLD";
	//char (*f_pointer)(unsigned int, char) = ft_cun;
	//printf("%c",(*function_pointer)('A'));

	printf("%s",ft_strmapi(arr, (ft_to_lower)));
}
*/
