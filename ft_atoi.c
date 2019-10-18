/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:55:55 by saich             #+#    #+#             */
/*   Updated: 2019/10/18 14:46:29 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whitespace(const char *str, size_t i)
{
	if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		result;
	size_t	j;

	result = 0;
	sign = 1;
	i = 0;
	j = 0;
	while (whitespace(str, i) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j++;
		result = result * 10 + (str[i++] - '0');
	}
	j > 18 && sign == -1 ? result = 0 : 0;
	j > 19 && sign == 1 ? result = -1 : 0;
	return (sign * result);
}
