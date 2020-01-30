/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 16:12:26 by jaodum            #+#    #+#             */
/*   Updated: 2020/01/02 18:12:42 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*string;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	while (ft_strwhitespace(s[i]))
		i++;
	if (i == ft_strlen(s))
		return (ft_strnew(1));
	while (ft_strwhitespace(s[j - 1]))
		j--;
	string = ft_strsub(s, i, j - i);
	return (string);
}
