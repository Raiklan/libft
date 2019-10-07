/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:47:05 by saich             #+#    #+#             */
/*   Updated: 2019/10/07 16:08:44 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"
#include <libc.h>

const void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *str;

	if (s == NULL)
		return (NULL); 
	i = 0;
	str =(void*)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

int main()
{
	char str[5] = "fgh";
	printf("%s", ft_memchr(str, 'z', 2));
}