/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:55:55 by saich             #+#    #+#             */
/*   Updated: 2019/10/15 20:11:22 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whitespace(const char *nptr, size_t i)
{
	if (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		return (1);
	return (0);
}

int			ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		result;
	size_t	j;

	result = 0;
	sign = 1;
	i = 0;
	j = 0;
	while (whitespace(nptr, i) == 1)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		j++;
		result = result * 10 + (nptr[i++] - '0');
	}
	j > 18 && sign == -1 ? result = 0 : 0;
	j > 19 && sign == 1 ? result = -1 : 0;
	return (sign * result);
}
