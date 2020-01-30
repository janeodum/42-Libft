/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:21:30 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/21 09:43:11 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char *csrc;
	unsigned char		*cdst;
	unsigned char		ch;

	csrc = (const unsigned char*)src;
	cdst = (unsigned char*)dst;
	ch = (unsigned char)c;
	while (n-- > 0)
	{
		if ((*cdst++ = *csrc++) == ch)
		{
			return ((void *)cdst);
		}
	}
	return (0);
}
