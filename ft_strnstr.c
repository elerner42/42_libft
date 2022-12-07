/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:06:29 by elerner           #+#    #+#             */
/*   Updated: 2022/11/30 22:50:02 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	size_s1;
	size_t	size_s2;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	while (n >= size_s2 && size_s1 >= size_s2)
	{
		if (ft_memcmp(s2, (char *)s1, size_s2) != 0)
		{
			s1++;
			n--;
		}
		else
			return ((char *)s1);
	}
	return (NULL);
}
