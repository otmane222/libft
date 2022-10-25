/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaboulgh <oaboulgh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:56:04 by oaboulgh          #+#    #+#             */
/*   Updated: 2022/10/25 01:16:52 by oaboulgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void ft_to_lower(unsigned int i, char *c)
{
	i = 0;

	if (*c >= 65 && *c <= 90)
		*c += 32;
	c++;
}

int main(void)
{
	char *arr = ft_strdup("HELLO");
	// char (*f_pointer)(unsigned int, char) = ft_cun;
	// printf("%c",(*function_pointer)('A'));

	ft_striteri(arr, &ft_to_lower);
	printf("%s", arr);
}
*/