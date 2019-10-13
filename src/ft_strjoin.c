/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:27:42 by saich             #+#    #+#             */
/*   Updated: 2019/10/13 16:22:47 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	j;
	size_t	i;

	if (!(str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) - 1))))
		return (0);
	i = 0;
	j = 0;
	while (i < strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (j < strlen(s2))
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
