/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:37:26 by saich             #+#    #+#             */
/*   Updated: 2019/10/08 12:50:26 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"
#include <libc.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char *str1;
	char *str2;
	size_t i;

	i = 0;
	str1 = (char *) s1;
	str2 = (char *) s2;
	while (i < n && str1[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

int main()
{
	char s1[4] = "fgh";
	char s2[4] = "fgh";
	printf("%i", ft_strncmp(s1, s2, 5));
}