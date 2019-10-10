/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:23:56 by saich             #+#    #+#             */
/*   Updated: 2019/10/07 12:45:22 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"
#include <libc.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while(i < n)
	{
		if(*(char*)dest == (char)c)
			break ;
		*(char*)(dest++) = *(char*)(src++);
		i++;
	}
	if (i == n)
		return (0);
	else
		return (dest);
	
}

int main()
{
	char str[5] = "fgh";
	char *r = ft_memccpy(str, "123", 'h', 3);
	printf("%s\n", str);
	printf("%s\n", r);
}