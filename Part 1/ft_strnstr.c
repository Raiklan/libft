/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:57:08 by saich             #+#    #+#             */
/*   Updated: 2019/10/08 14:54:11 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"
#include "libc.h"
char *ft_strnstr(const char	*big, const char *little, size_t len)
{
	char *str;
	char *to_find;
	size_t i;
	size_t j;

	str = (char *)big;
	to_find = (char *)little;
	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return(str);
	while (str[i] && i < len)
	{
		i = i - j; 
		j = 0;
		while (str[i] == to_find[j] && to_find[j++] && i < len)
		{
			if (to_find[j] == '\0')
				return (&str[i - j + 1]);
			i++;
		}
		i++;
	}
	return (0);
}

int main()
{
	char *big = "lalalalalolat";
	char *little = "lat";
	printf("%s", ft_strnstr(big, little, 11));
	//printf("%s", strnstr(big, little, 11));
}