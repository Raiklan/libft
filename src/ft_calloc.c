/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:47:17 by saich             #+#    #+#             */
/*   Updated: 2019/10/13 16:04:30 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *dest;

	if (size == 0 || nmemb == 0)
		return (NULL);
	if (!(dest = malloc(size * nmemb)))
		return (NULL);
	ft_bzero(dest, nmemb);
	return (dest);
}
