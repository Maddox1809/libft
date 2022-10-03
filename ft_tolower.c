/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoiret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:29:47 by ljoiret           #+#    #+#             */
/*   Updated: 2022/10/03 09:32:48 by ljoiret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	ft_tolower(unsigned char c)
{
	if (c <= 90 && c >= 65)
		return (c += 32);
	return (c);
}
