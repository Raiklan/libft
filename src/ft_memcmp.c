/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:09:28 by saich             #+#    #+#             */
/*   Updated: 2019/10/14 14:49:04 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*str1;
	const unsigned char		*strt2;

	str1 = (const unsigned char *)s1;
	strt2 = (const unsigned char *)s2;
	if (str1 == NULL || strt2 == NULL)
		return (0);
	while (n)
	{
		if (*str1 != *strt2)
			return (*str1 - *strt2);
		str1++;
		strt2++;
		n--;
	}
	return (0);
}
