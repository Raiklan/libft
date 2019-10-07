/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:04:39 by saich             #+#    #+#             */
/*   Updated: 2019/10/07 12:08:05 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"
#include <libc.h>

void	*ft_bzero (void *s, size_t len)
{
	char	*b = (char*)s;
	size_t 	i;

	i = 0;
	while(i < len)
	{
		b[i] = '\0';
		i++;
	}
	return (s);
}

int main()
{
	char str[3] = "fgh";
	ft_bzero(str, 1);
	printf("%c", str[1]);
}