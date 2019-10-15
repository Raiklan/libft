/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:20:25 by saich             #+#    #+#             */
/*   Updated: 2019/10/15 16:22:11 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;

	dest_cpy = (unsigned char*)dest;
	src_cpy = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dest_cpy[i] = src_cpy[i];
		if (dest_cpy[i] == (unsigned char)c)
			return ((void*)(dest + i + 1));
		i++;
	}
	return (NULL);
}
