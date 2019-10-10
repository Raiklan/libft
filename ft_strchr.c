/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:10:23 by saich             #+#    #+#             */
/*   Updated: 2019/10/08 12:27:36 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"
#include <libc.h>

char	*ft_strchr(const char *s, int c)
{
	int i;
	char *str;

	if (s == '\0')
		return (0);
	i = 0;
	str = (char*)s;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}

int main()
{
	char str[4] = "fgh";
	printf("%s", ft_strchr(str, 103));
}