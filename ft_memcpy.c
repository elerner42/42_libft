/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:31:18 by elerner           #+#    #+#             */
/*   Updated: 2023/02/22 22:25:34 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	La función memcpy() copia n bytes del área de memoria src a la memoria
	destino del área Las áreas de memoria no deben superponerse.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	c;

	c = 0;
	if ((dest == src) || n == 0)
		return (dest);
	while (c < n)
	{
		((char *)dest)[c] = ((char *)src)[c];
		c++;
	}
	return (dest);
}
