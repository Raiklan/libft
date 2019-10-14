/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:09:28 by saich             #+#    #+#             */
/*   Updated: 2019/10/14 12:44:57 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char		*str1;
	char		*strt2;

	str1 = (char *)s1;
	strt2 = (char *)s2;
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
