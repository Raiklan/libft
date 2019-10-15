/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:19:52 by saich             #+#    #+#             */
/*   Updated: 2019/10/15 02:15:18 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	int			i;

	i = 0;
	if (len)
	{
		if(!(ptr = malloc((len * sizeof(char)) + 1)))
			return (NULL);
		while (s[start] && len > 0)
		{
			ptr[i] = s[start];
			start++;
			len--;
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
