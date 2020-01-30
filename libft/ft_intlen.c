/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 15:08:10 by jaodum            #+#    #+#             */
/*   Updated: 2020/01/02 10:21:37 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int num)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	if (num < 0)
		i = -num;
	else
		i = num;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}
