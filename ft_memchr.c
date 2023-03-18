/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:41:43 by elerner           #+#    #+#             */
/*   Updated: 2023/03/16 17:17:46 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Localiza la primera aparición del carácter c (convertido a unsigned char) 
	en los primeros n caracteres (cada uno interpretado como un unsigned char) 
	del objeto apuntado por s.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	ch = (char)c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == ch)
		{
			return (str);
		}
		str++;
		n--;
	}
	return (NULL);
}
