/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 21:21:02 by ljoiret           #+#    #+#             */
/*   Updated: 2022/09/27 16:56:32 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_memset(void *ptr, int value, int num)
{
	int		i;
	char	*p;

	value = (unsigned char) value;
	p = (char *) ptr;
	i = 0;
	while (i < num)
	{
		*(p + i) = value;
		i++;
	}
}
