/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:42:24 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/21 09:48:10 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		ch;

	ptr = (const unsigned char*)s;
	ch = (unsigned char)c;
	while (n-- > 0)
	{
		if (*ptr++ == ch)
		{
			return (void*)(ptr - 1);
		}
	}
	return (NULL);
}
