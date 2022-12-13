/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:06:39 by elerner           #+#    #+#             */
/*   Updated: 2022/12/13 20:51:15 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	j;

	dstlen = ft_strlen(dst);
	i = 0;
	j = dstlen;
	if (dstlen >= dstsize)
		return (dstsize + ft_strlen(src));
	if (dstsize > 0)
	{
		while (src[i] && dstlen + i < dstsize - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (dstlen + ft_strlen(src));
}
