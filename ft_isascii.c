/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:54:39 by ljoiret           #+#    #+#             */
/*   Updated: 2022/09/07 14:56:27 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int arg)
{
	char	c;

	c = (char) arg;
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
