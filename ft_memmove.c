/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 10:27:09 by ljoiret           #+#    #+#             */
/*   Updated: 2022/10/03 12:14:26 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const char *src, int len)
{
	char temp[2048];

	ft_memcpy(temp, src, len);
	ft_memcpy((char *) dest, temp, len);

	return (dest);
}
