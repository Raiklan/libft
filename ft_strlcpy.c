/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:51:23 by saich             #+#    #+#             */
/*   Updated: 2019/10/22 17:05:40 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (!dest || !src)
		return (0);
	while (dstsize > 0 && i < dstsize - 1 && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dest[i] = 0;
	while (src[i])
		i++;
	return (i);
}
