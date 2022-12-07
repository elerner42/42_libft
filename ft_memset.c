/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:31:18 by elerner           #+#    #+#             */
/*   Updated: 2022/12/07 21:07:28 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Remplaza el caracter "c",las posiciones "r", en la cadena recibida
 * "*str".
 */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t r)
{
	size_t	n;

	n = 0;
	while (n < r)
	{
		((unsigned char *)str)[n] = (unsigned char)c;
		n++;
	}
	return (str);
}
