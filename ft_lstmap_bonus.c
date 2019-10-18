/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:44:36 by saich             #+#    #+#             */
/*   Updated: 2019/10/18 12:51:38 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;

	if (lst)
	{
		if (!(new = ft_lstnew(f(lst->content))))
			ft_lstdelone(new, del);
		new->next = ft_lstmap(lst->next, f, del);
		return (new);
	}
	return (NULL);
}
