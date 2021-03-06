/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaodum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 10:04:08 by jaodum            #+#    #+#             */
/*   Updated: 2018/11/19 10:09:58 by jaodum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while (*ptr != '\0')
		++ptr;
	while ((*ptr++ = *src++) != '\0')
		;
	return (dest);
}
