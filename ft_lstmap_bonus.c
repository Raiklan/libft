/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:44:36 by saich             #+#    #+#             */
/*   Updated: 2019/10/16 17:44:45 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*))
{
	t_list	*new;
	t_list	*bef;
	t_list	*begin;

	bef = 0;
	if (lst && f)
	{
		begin = ft_lstnew(f(lst->content));
		bef = begin;
		lst = lst->next;
		while (lst)
		{
			new = ft_lstnew(f(lst->content));
			bef->next = new;
			bef = new;
			lst = lst->next;
		}
		return (begin);
	}
	else
		return (0);
}
