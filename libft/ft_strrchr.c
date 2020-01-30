/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:06:59 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/21 09:42:41 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char to_find;
	char *csrc;

	csrc = (char *)s;
	to_find = (char)c;
	while (*csrc != '\0')
	{
		csrc++;
	}
	if (to_find == '\0')
	{
		return (csrc);
	}
	while (csrc != s && *csrc != to_find)
	{
		csrc--;
	}
	if (*csrc == to_find)
	{
		return (csrc);
	}
	return (NULL);
}
