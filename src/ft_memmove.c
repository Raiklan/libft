/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:23:46 by saich             #+#    #+#             */
/*   Updated: 2019/10/15 16:47:15 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cpy_dest;
	unsigned char	*cpy_src;
	unsigned int	i;

	cpy_dest = (unsigned char*)dest;
	cpy_src = (unsigned char*)src;
	i = 0;
	if (cpy_src < cpy_dest)
		while (n-- > 0)
			cpy_dest[n] = cpy_src[n];
	else
		while (i < n)
		{
			cpy_dest[i] = cpy_src[i];
			i++;
		}
	return (dest);
}
