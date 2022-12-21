/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:40:59 by elerner           #+#    #+#             */
/*   Updated: 2022/12/21 22:52:53 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t		a;
	size_t		b;
	char		*tmp;

	a = 0;
	b = 0;
	if (!str)
		return (NULL);
	if (len > ft_strlen(str))
		len = ft_strlen(str);
	tmp = (char *)ft_calloc(len + 1, sizeof(char));
	if (!tmp)
		return (NULL);
	if (start > len)
	{
		tmp[0] = '\0';
		return (tmp);
	}
	while (str[a])
	{
		if (a >= start && b < len)
		{
			tmp[b] = str[a];
			b++;
		}
		a++;
	}
	return (tmp);
}
