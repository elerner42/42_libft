/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:19:52 by elerner           #+#    #+#             */
/*   Updated: 2022/11/03 19:19:15 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	ch;

	ch = c;
	tmp = NULL;
	while (*s)
	{
		if (*s == ch)
			tmp = (char *)s;
		if (*s == '\0')
			return (tmp);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (tmp);
}