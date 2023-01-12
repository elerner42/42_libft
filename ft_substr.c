/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:40:59 by elerner           #+#    #+#             */
/*   Updated: 2023/01/12 20:17:59 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	comentario
*/
char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t		a;
	size_t		b;
	char		*m_tmp;

	a = 0;
	if (!str)
		return (NULL);
	if (start > ft_strlen(str) || *str == '\0')
		return (ft_strdup(""));
	if (len + start > ft_strlen(str))
		len = ft_strlen(str) - start;
	m_tmp = (char *)malloc((len + 1) * sizeof(char));
	if (!m_tmp)
		return (NULL);
	while (a < len)
	{
		m_tmp[a] = str[a + start];
		a++;
	}
	m_tmp[a] = '\0';
	return (m_tmp);
}
