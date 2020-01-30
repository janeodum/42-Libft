/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 09:46:49 by jaodum            #+#    #+#             */
/*   Updated: 2020/01/02 18:22:14 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*csrc;
	unsigned char		*cdst;
	size_t				i;

	if (dst == src)
		return (dst);
	if (dst < src)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		csrc = (unsigned char*)src;
		cdst = (unsigned char*)dst;
		i = 0;
		while (len > 0)
		{
			len--;
			cdst[len] = csrc[len];
		}
	}
	return (dst);
}
