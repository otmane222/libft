/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboulgh <oaboulgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:12:41 by oaboulgh          #+#    #+#             */
/*   Updated: 2022/10/22 23:41:28 by oaboulgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*p2;

	if (!s1 || !s2)
		return (0);
	p2 = (malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (!p2)
		return (0);
	i = ft_strlen(s1);
	ft_memcpy(p2, s1, i);
	p2 = p2 + i;
	ft_memcpy(p2, s2, ft_strlen(s2)+1);
	p2 = p2 - i;
	return (p2);
}
