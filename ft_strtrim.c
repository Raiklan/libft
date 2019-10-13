/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:23:14 by saich             #+#    #+#             */
/*   Updated: 2019/10/13 15:26:27 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		in_set(const char *s1, char c)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*res;

	i = 0;
	j = strlen(s1) - 1;
	k = 0;
	while (s1[i] && in_set(set, s1[i]))
		i++;
	while (in_set(set, s1[j]) && j != 0 && i != strlen(s1))
		j--;
	if (!(res = ft_calloc(sizeof(char) * (j + 1 - i) + 1, 1)))
		return (NULL);
	while (i <= j)
		res[k++] = s1[i++];
	res[i] = '\0';
	return (res);
}
