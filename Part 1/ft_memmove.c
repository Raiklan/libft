/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:23:46 by saich             #+#    #+#             */
/*   Updated: 2019/10/07 14:46:03 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"
#include <libc.h>


void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char tmp;
	size_t i;

	i = 0;
	while(i < n)
	{
		tmp = *(char*)src++;
		*(char*)dest++ = tmp;
		i++;
	}
	return (dest);
}

int main()
{
	char src[5] = "lal";
	char dest[5] = "";
	ft_memmove(dest, src, 3);
	//memmove(dest, src, 3);
	printf("%s", dest);
}