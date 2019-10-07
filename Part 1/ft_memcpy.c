/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:08:33 by saich             #+#    #+#             */
/*   Updated: 2019/10/07 12:23:34 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"
#include <libc.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while(i < n)
	{
		*(char*)(dest + i) = *(char*)(src + i);
		i++;
	}
	return(dest);
}

int main()
{
	char str[3] = "fgh";
	ft_memcpy(str, "123", 1);
	printf("%c", str[1]);
}