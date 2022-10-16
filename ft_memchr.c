/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:23:49 by ljoiret           #+#    #+#             */
/*   Updated: 2022/10/03 17:52:45 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *) s;
	while (c > 256)
		c -= 256;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char) c)
			return ((void *) &s[i]);
		i++;
	}
	return (0);
}
