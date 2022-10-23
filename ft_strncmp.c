/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <ljoiret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:57:29 by ljoiret           #+#    #+#             */
/*   Updated: 2022/10/23 10:24:49 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((unsigned char) s1[i] - (unsigned char) s2[i] < 0)
			return (-1);
		else if ((unsigned char) s1[i] - (unsigned char) s2[i] > 0)
			return (1);
		i++;
	}
	return (0);
}
