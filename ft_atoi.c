/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <ljoiret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:44:51 by ljoiret           #+#    #+#             */
/*   Updated: 2022/10/22 17:32:16 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_whitespace(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	else if (c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long	i;
	int			negative;
	int			result;

	result = 0;
	i = 0;
	negative = 1;
	while (is_whitespace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * negative);
}
