/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:29:12 by saich             #+#    #+#             */
/*   Updated: 2019/10/13 16:26:07 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*str;

	if (s == '\0')
		return (0);
	i = 0;
	j = -1;
	str = (char*)s;
	while (str[i])
	{
		if (str[i] == (char)c)
			j = i;
		i++;
	}
	return (j == -1 ? 0 : &str[j]);
}
