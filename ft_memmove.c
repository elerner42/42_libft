/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:40:58 by elerner           #+#    #+#             */
/*   Updated: 2023/03/16 17:19:23 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	La función memmove() copia n bytes del área de memoria 
	src al área de memoria dest. Las áreas de memoria pueden solaparse.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else if (d < s)
		ft_memcpy(d, s, len);
	return (d);
}
