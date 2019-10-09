/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:51:02 by saich             #+#    #+#             */
/*   Updated: 2019/10/09 12:15:35 by saich            ###   ########.fr       */
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
	size_t tmp;

	i = ft_strlen(dst);
	tmp = i;
	j = 0;
	if (dst[j] == '\0' || !(dst))
		return (ft_strlen((char*)src));
	if (src[j] == '\0')
		return (dstsize);
	if (dstsize > tmp)
	{
		while (src[j] && j < dstsize - tmp - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (ft_strlen((char *)src) + tmp);
	}
	else
	{
		return (ft_strlen((char *)src) + dstsize);
	}
	
}

int main()
{
	char dst[10] = "popo";
	const char *src = "lala"; 
	printf("%zu   %s\n", strlcat(dst, src, 10), dst);
	//printf("%zu    %s\n", ft_strlcat(dst, src, 10), dst);
}
