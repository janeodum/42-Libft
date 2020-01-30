/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:21:05 by jaodum            #+#    #+#             */
/*   Updated: 2020/01/02 11:07:28 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mptr;
	unsigned int	i;
	unsigned int	j;

	if (!s || !f)
	{
		return (NULL);
	}
	i = 0;
	j = ft_strlen(s);
	if (!(mptr = (char*)malloc(sizeof(char) * j + 1)))
		return (NULL);
	while (s[i])
	{
		mptr[i] = (*f)(i, s[i]);
		i++;
	}
	mptr[i] = '\0';
	return (mptr);
}
