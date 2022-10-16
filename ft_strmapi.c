/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <ljoiret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:52:10 by ljoiret           #+#    #+#             */
/*   Updated: 2022/10/12 23:01:10 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int	i;
	int *str;

	i = 0;
	str = malloc(ft_strlen(s));
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = f(,str[i])
	}
}