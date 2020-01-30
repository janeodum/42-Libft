/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:00:16 by jaodum            #+#    #+#             */
/*   Updated: 2019/12/20 17:24:46 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char to_find;

	to_find = (unsigned char)c;
	while (*s != '\0' && *s != to_find)
	{
		s++;
	}
	if (*s == to_find)
	{
		return ((char*)s);
	}
	return (NULL);
}
