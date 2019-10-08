/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:01:43 by saich             #+#    #+#             */
/*   Updated: 2019/10/07 17:07:48 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}
