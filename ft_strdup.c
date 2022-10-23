/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <ljoiret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:13:02 by ljoiret           #+#    #+#             */
/*   Updated: 2022/10/22 19:57:54 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		length;

	length = ft_strlen(s1);
	s2 = malloc(length + 1);
	if (!s2)
		return (0);
	ft_memcpy(s2, s1, length + 1);
	return (s2);
}
