/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:08:33 by saich             #+#    #+#             */
/*   Updated: 2019/10/20 20:39:08 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	dest = (char *)dst;
	source = (char *)src;
	while (i < n)
	{
		*(dest + i) = *(source + i);
		i++;
	}
	return (dst);
}
