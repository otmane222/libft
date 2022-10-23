/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboulgh <oaboulgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:54:42 by oaboulgh          #+#    #+#             */
/*   Updated: 2022/10/21 16:15:25 by oaboulgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*arr;
	const unsigned char	*source;
	size_t				i;

	source = src;
	arr = dst;
	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		arr[i] = source[i];
		i++;
	}
	return (dst);
}
