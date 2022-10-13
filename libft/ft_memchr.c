/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboulgh <oaboulgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 03:27:41 by oaboulgh          #+#    #+#             */
/*   Updated: 2022/10/13 04:05:36 by oaboulgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	char			*p;
	size_t			i;

	i = 0;
	a = (unsigned char)c;
	p = (char *)s;
	while (p[i] && i < n)
	{
		if (p[i] == c)
		{
			return (&p[i]);
		}
		i++;
	}
	return (0);
}
