/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:36:16 by ljoiret           #+#    #+#             */
/*   Updated: 2022/10/03 09:40:51 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	get_array_size(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	size;
	int	i;
	(char) c;

	i = 0;
	size = get_array_size(s) - 1;
	while (i <= size)
	{
		if (s[size - i] == c)
			return (*s[size - i]);
		i++;
	}
	return (0);
}
