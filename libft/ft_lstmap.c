/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 16:17:02 by jaodum            #+#    #+#             */
/*   Updated: 2020/01/03 15:08:57 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new_list;

	if (lst)
	{
		new_list = (*f)(lst);
		lst = lst->next;
		while (lst)
		{
			ft_lstpush(&new_list, (*f)(lst));
			lst = lst->next;
		}
		return (new_list);
	}
	return (NULL);
}
