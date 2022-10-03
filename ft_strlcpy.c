/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:33:19 by ljoiret           #+#    #+#             */
/*   Updated: 2022/09/27 16:56:47 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strlcpy(char *dest, const char *src, int size)
{
	int	i;

	i = -1;
	if (size != 0)
	{
		while (++i < size && src[i])
		{
			dest[i] = src[i];
		}
	}
	if (i == size)
	{
		if (size != 0)
			dest[i] = '\0';
	}
	return (i);
}
