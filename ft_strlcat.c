/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:45:35 by ljoiret           #+#    #+#             */
/*   Updated: 2022/10/04 17:45:37 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	destsize;

	i = 0;
	destsize = ft_strlen(dst);
	while (i < (dstsize - destsize))
	{
		dst[destsize + i] = src[i];
		i++;
	}
	if (dstsize != 0 && destsize > dstsize)
		dst[i] = '\0';
	return (destsize + ft_strlen(src));
}
