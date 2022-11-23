/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:41:43 by elerner           #+#    #+#             */
/*   Updated: 2022/11/23 22:15:19 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	ch = (char)c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == ch)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
