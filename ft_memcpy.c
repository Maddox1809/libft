/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:22:19 by ljoiret           #+#    #+#             */
/*   Updated: 2022/09/27 17:01:26 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_memcpy(void *dest, const void *src, int num)
{
	int	i;

	i = 0;
	while (i < num)
	{
		*((char *) dest + i) = *((char *) src + i);
		i++;
	}
	return (dest);
}
