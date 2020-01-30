/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:18:35 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/20 16:46:10 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *buffer;

	if (!(buffer = (void*)malloc(sizeof(*buffer) * (size))))
	{
		return (NULL);
	}
	ft_bzero(buffer, size);
	return (buffer);
}
