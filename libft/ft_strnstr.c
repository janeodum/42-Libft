/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 10:33:41 by jaodum            #+#    #+#             */
/*   Updated: 2020/01/02 18:52:34 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strnstr(const char *str, const char *to_find, size_t stlen)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(*to_find))
		return ((char *)str);
	while ((i < stlen) && str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (to_find[j] != '\0' && str[i + j] ==
					to_find[j] && (i + j) < stlen)
			{
				j++;
			}
			if (to_find[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
