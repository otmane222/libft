/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboulgh <oaboulgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 03:27:41 by oaboulgh          #+#    #+#             */
/*   Updated: 2022/10/22 22:58:55 by oaboulgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*p;
	size_t			i;

	i = 0;
	a = (unsigned char)c;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] == a)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
