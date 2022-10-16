/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <ljoiret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:36:46 by ljoiret           #+#    #+#             */
/*   Updated: 2022/10/11 16:36:32 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	size;

	size = ft_strlen(s);
	while (c > 256)
		c -= 256;
	i = 0;
	if (c == 0)
		return ((char *)(s + size));
	while (i < size)
	{
		if (s[size - 1 - i] == (char) c)
			return ((void *) &s[size - 1 - i]);
		i++;
	}
	if (s[size - 1 - i] == (char) c)
		return ((char *) &s[size - 1 - i]);
	return (NULL);
}
