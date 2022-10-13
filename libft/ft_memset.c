/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboulgh <oaboulgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:30:39 by oaboulgh          #+#    #+#             */
/*   Updated: 2022/10/12 00:33:35 by oaboulgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	a;
	size_t			i;

	i = 0;
	a = (unsigned char)c;
	s = (unsigned char *)b;
	while (i < len)
	{
		s[i] = a;
		i++;
	}
	return (b);
}
