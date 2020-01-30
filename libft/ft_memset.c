/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 15:14:39 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/19 15:28:43 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p;
	unsigned char ch;

	p = (unsigned char*)b;
	ch = (unsigned char)c;
	while (len-- > 0)
	{
		*p++ = ch;
	}
	return (b);
}
