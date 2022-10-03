/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:25:27 by ljoiret           #+#    #+#             */
/*   Updated: 2022/09/11 11:29:54 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int n)
{
	char	*ptr;
	int	i;

	i = -1;
	ptr = (char *) s;
	while (++i < n)
		*(ptr + i) = '\0';
}
