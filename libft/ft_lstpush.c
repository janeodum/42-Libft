/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 17:25:46 by jaodum            #+#    #+#             */
/*   Updated: 2020/01/02 17:36:53 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush(t_list **head, t_list *new)
{
	t_list	*current;

	current = *head;
	if (current)
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = new;
	}
	else
		*head = new;
}
