/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:40:58 by elerner           #+#    #+#             */
/*   Updated: 2022/09/24 21:40:35 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	c;

	c = 0;
	if (!dest)
		return (NULL);
	while (c < n)
	{
		((char *)dest)[c] = ((char *)src)[c];
		c++;
	}
	return (dest);
}

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

int main(void)
{
	char *src ="cadena source";
	char dst[50] ="destino de la cadena source";

	printf("%s\n", ft_memmove(dst,src,4));
}