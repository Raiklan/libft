/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:55:55 by saich             #+#    #+#             */
/*   Updated: 2019/10/09 15:47:13 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/libft.h"
#include <libc.h>

int		ft_atoi(const char *nptr)
{
	int i;
	int k;
	int sign;
	size_t j;

	i = 0;
	sign = 1;
	k = 0;
	j = ft_strlen(nptr);
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	j -= i;
	if (j > 19 && sign == 1)
		return (-1);
	if (j > 18 && sign ==-1)
		return (0);
	while (nptr[i] > 47 && nptr[i] < 58)
		k = (k * 10) + nptr[i++] - '0';
	return (k * sign);
}

int main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
	printf("%d", atoi(av[2]));
}
