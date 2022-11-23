/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:53:37 by elerner           #+#    #+#             */
/*   Updated: 2022/11/17 18:36:13 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	if (n == 0)
		return (0);
	while (n - 1 > c && s1[c] != '\0' && s2[c] != '\0' && s1[c] == s2[c])
	{
		c++;
	}
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
