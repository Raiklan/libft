/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:24:56 by saich             #+#    #+#             */
/*   Updated: 2019/10/10 17:03:09 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *dest;

	if(!(dest = malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++; 
	}
	dest[i] = '\0';
	return (dest);
}
