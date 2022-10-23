/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboulgh <oaboulgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 07:54:09 by oaboulgh          #+#    #+#             */
/*   Updated: 2022/10/16 05:09:30 by oaboulgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	char	*p;

	a = (char)c;
	p = (char *)s;
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
