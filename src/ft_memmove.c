/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:23:46 by saich             #+#    #+#             */
/*   Updated: 2019/10/14 21:27:38 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*tmp2;
	unsigned char		*tmp;
	size_t				i;

	i = 0;
	tmp = (unsigned char *)dest;
	tmp2 = (unsigned char *)src;
	if (tmp2 < tmp)
		while (i++ <= n)
			tmp[n - i] = tmp2[n - i];
	else
		while (n-- > 0)
			*(tmp++) = *(tmp2++);
	return (dest);
}
