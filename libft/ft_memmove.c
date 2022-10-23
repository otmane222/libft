/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboulgh <oaboulgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:54:54 by oaboulgh          #+#    #+#             */
/*   Updated: 2022/10/21 17:02:30 by oaboulgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*arr;
	unsigned const char	*source;
	size_t				i;

	i = 0;
	arr = dst;
	source = src;
	if (arr > source)
	{
		while (len--)
			arr[len] = source[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*
int main()
{
	char str[] = "hello world";
	char *dst = str+1;
	printf("%s", ft_memcpy(dst, str, 10));
}
*/