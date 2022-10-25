/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboulgh <oaboulgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 04:17:17 by oaboulgh          #+#    #+#             */
/*   Updated: 2022/10/25 01:07:50 by oaboulgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*arr;
	char	*to_find;

	i = 0;
	j = 0;
	arr = (char *)haystack;
	to_find = (char *)needle;
	if (to_find[i] == 0)
		return (arr);
	if (haystack == NULL && len == 0)
		return (0);
	while (arr[i] && i < len)
	{
		while (to_find[j] == arr[i + j] && (i + j) < len)
		{
			j++;
			if (to_find[j] == '\0' && i <= len - j)
				return (&arr[i]);
		}
		i++;
		j = 0;
	}
	return (0);
}
