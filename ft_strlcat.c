/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <ljoiret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:45:35 by ljoiret           #+#    #+#             */
/*   Updated: 2022/10/22 19:09:09 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	destsize;

	i = 0;
	destsize = ft_strlen(dst);
	while (i < dstsize - 1)
	{
		dst[destsize + i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[destsize + i] = '\0';
	return (dstsize + ft_strlen(src));
}
