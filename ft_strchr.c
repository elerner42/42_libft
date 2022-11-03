/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:47:22 by elerner           #+#    #+#             */
/*   Updated: 2022/11/03 14:54:47 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s == '\0')
	{
		if (*s == (char)c)
			return ((char *)p);
	}
	if (*s == '\0')
		return ((char *)s);
	return (NULL);
}
