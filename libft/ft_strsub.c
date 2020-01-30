/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 12:00:57 by jaodum            #+#    #+#             */
/*   Updated: 2020/01/03 15:06:58 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (!s || !(result = ft_memalloc(len + 1)))
	{
		return (NULL);
	}
	result = ft_strncpy(result, (char *)s + start, len);
	return (result);
}
