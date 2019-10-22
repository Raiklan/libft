/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:51:02 by saich             #+#    #+#             */
/*   Updated: 2019/10/22 18:47:08 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (dstsize == 0)
		return (0);
	while (dst[j] && j < dstsize)
		j++;
	i = j;
	while (j < dstsize - 1 && src[j - i])
	{
		dst[j] = src[j - i];
		j++;
	}
	if (i < dstsize)
		dst[j] = '\0';
	return (i + ft_strlen(src));
}
