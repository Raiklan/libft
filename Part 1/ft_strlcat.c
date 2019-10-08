/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:51:02 by saich             #+#    #+#             */
/*   Updated: 2019/10/08 16:40:16 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"

size_t		ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	char *str;

	i = dstsize;
	j = 0;
	str = (char *)src;
	if (dst[j] == '\0')
		return (ft_strlen(str));
	if (str[j] == '\0')
		return (dstsize);
	while (str[j])
		dst[i++] = str[j++];
	dst[i] = '\0';
	return (ft_strlen(dst));
}

int main()
{
	char dst[5] = "popo";
	const char *src = "lala"; 
	printf("%zu\n", strlcat(dst, src, 4));
	//printf("%zu\n", ft_strlcat(dst, src, 4));
}
