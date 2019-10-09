/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:19:52 by saich             #+#    #+#             */
/*   Updated: 2019/10/09 12:27:03 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dest;
	size_t i;

	if(!(dest = malloc(sizeof(char) * len)))
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	return (dest);
}