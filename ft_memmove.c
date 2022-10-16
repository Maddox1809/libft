/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 10:27:09 by ljoiret           #+#    #+#             */
/*   Updated: 2022/10/03 17:55:44 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const char *src, size_t len)
{
	char	temp[2048];

	ft_memcpy(temp, src, len);
	ft_memcpy((char *) dst, temp, len);
	return (dst);
}
