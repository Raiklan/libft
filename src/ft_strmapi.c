/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsmisa <itsmisa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:24:56 by saich             #+#    #+#             */
/*   Updated: 2019/10/15 01:19:40 by itsmisa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ret;

	if (s == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
		;
	if (!(ret = (char*)malloc(sizeof(*ret) * (i + 1))))
		return (NULL);
	i = -1;
	while (s[++i])
		ret[i] = f(i, s[i]);
	ret[i] = '\0';
	return (ret);
}
