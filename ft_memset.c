/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:31:18 by elerner           #+#    #+#             */
/*   Updated: 2022/10/11 23:19:36 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t r)
{
	size_t	n;

	if (!str)
		return (NULL);
	n = 0;
	while (n < r)
	{
		((unsigned char *)str)[n] = (unsigned char)c;
		n++;
	}
	return (str);
}
