/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:45:38 by saich             #+#    #+#             */
/*   Updated: 2019/10/07 12:03:33 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"
#include <libc.h>

void	*ft_memset (void *s, int c, size_t len)
{
	char	*b = (char*)s;
	size_t 	i;

	i = 0;
	while(i < len)
	{
		b[i] = (char)c;
		i++;
	}
	return (s);
}

int main()
{
	char str[3] = "fgh";
	ft_memset(str, 3, 1);
	printf("%i", str[2]);
}