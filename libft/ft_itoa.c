/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 13:02:57 by jaodum            #+#    #+#             */
/*   Updated: 2020/01/02 16:25:46 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	int				len;
	int				negative;
	unsigned int	nb;
	char			*str;

	if (n == 0)
		return (ft_strdup("0"));
	negative = (n < 0) ? 1 : 0;
	nb = (n < 0) ? -n : n;
	len = ft_intlen(nb) + negative;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len--] = '\0';
	while (len >= 0)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
