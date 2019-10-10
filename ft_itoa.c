/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:28:48 by saich             #+#    #+#             */
/*   Updated: 2019/10/10 17:03:24 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		power(int nb, int powa)
{
	if (powa < 0)
		return (0);
	if (powa == 0)
		return (1);
	return (nb * power(nb, powa - 1));
}

int		nega(int nbr)
{
	if (nbr < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int nbr)
{
	char	*dest;
	int		i;
	int		j;
	int		nb;

	i = 0;
	nb = nbr;
	while (nb != 0 && i++ <= 2147483647)
		nb /= 10;
	if (!(dest = malloc(sizeof(char) * i + nega(nb))))
		return (0);
	j = 0;
	nb = nbr;
	if (nega(nbr) == 1)
	{
		dest[0] = '-';
		j = 1;
		nb = -nbr;
	}
	while (i-- > 0)
		dest[j++] = nb / power(10, i) % 10 + '0';
	dest[j] = '\0';
	return (dest);
}
