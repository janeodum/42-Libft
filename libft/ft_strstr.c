/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 10:19:06 by jaodum            #+#    #+#             */
/*   Updated: 2020/01/02 16:58:18 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *str, const char *to_find)
{
	char		*haystack;
	char		*needle;

	if (!*to_find)
		return ((char *)str);
	while (*str)
	{
		haystack = (char *)str;
		needle = (char *)to_find;
		while (*str && *needle && *str == *needle)
		{
			str++;
			needle++;
		}
		if (!*needle)
			return (haystack);
		str = haystack + 1;
	}
	return (NULL);
}
