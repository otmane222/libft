/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboulgh <oaboulgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 01:03:04 by oaboulgh          #+#    #+#             */
/*   Updated: 2022/10/17 01:46:04 by oaboulgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		a;
	char		*p;
	int			i;

	i = ft_strlen(s);
	a = (char)c;
	p = (char *)s;
	if (p == NULL)
		return (NULL);
	p = (p + i);
	while (*p != a && p > s)
	{
		p--;
	}
	if (*p == a)
		return (p);
	return (NULL);
}
