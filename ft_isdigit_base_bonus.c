/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_base_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:30:49 by saich             #+#    #+#             */
/*   Updated: 2019/10/17 17:31:02 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit_base(int c, int base)
{
	if (ft_isdigit(c) && (c - '0') < base)
		return (1);
	if (ft_islower(c) && (c - 'a' + 10) < base)
		return (1);
	if (ft_isupper(c) && (c - 'A' + 10) < base)
		return (1);
	return (0);
}
