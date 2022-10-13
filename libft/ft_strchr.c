/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboulgh <oaboulgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 07:54:09 by oaboulgh          #+#    #+#             */
/*   Updated: 2022/10/12 19:22:52 by oaboulgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	char	*p;
	int		i;

	i = 0;
	a = (char)c;
	p = (char *)s;
	if (p == NULL)
		return (NULL);
	while (*p)
	{
		if (*p == a)
			return (p);
		p++;
	}
	if (*p == a)
		return (p);
	return (NULL);
}
