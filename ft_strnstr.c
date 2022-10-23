/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <ljoiret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:14:25 by ljoiret           #+#    #+#             */
/*   Updated: 2022/10/23 10:09:04 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (i < len && haystack[i])
	{
		y = 0;
		if (haystack[i] == needle[0])
		{
			while (needle[y] == haystack[i + y] && (i + y) < len)
				y++;
			if (y == ft_strlen(needle))
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (0);
}
