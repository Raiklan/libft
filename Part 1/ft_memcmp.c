/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:09:28 by saich             #+#    #+#             */
/*   Updated: 2019/10/07 16:22:18 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"
#include <libc.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *str1;
	char *str2;

	i = 0;
	str1 = (void *)s1;
	str2 = (void *)s2;
	while (i < n && str1[i] && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

int main()
{
	char str1[4] = "fgh";
	char str2[8] = "fghijel";
	printf("%i", ft_memcmp(str1, str2, 0));
}