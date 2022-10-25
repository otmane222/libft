/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboulgh <oaboulgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:55:34 by oaboulgh          #+#    #+#             */
/*   Updated: 2022/10/25 01:15:04 by oaboulgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	sum_of_size;
	char	*p;

	if (s == NULL)
		return (0);
	j = 0;
	sum_of_size = ft_strlen(s) + start;
	if (ft_strlen(s) < start)
	{
		p = malloc(1);
		*p = '\0';
		return (p);
	}
	if (sum_of_size < len)
		len = sum_of_size;
	p = (char *)(malloc((len + 1) * sizeof(char)));
	if (!p)
		return (0);
	while (s[start] && j < len)
		p[j++] = s[start++];
	p[j] = '\0';
	return (p);
}
