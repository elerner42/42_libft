/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:12:33 by elerner           #+#    #+#             */
/*   Updated: 2022/12/19 18:52:59 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ft_calloc asigna  memoria  para  una  matriz  de  nmemb elementos 
	de size bytes cada uno y devuelve un puntero a la memoria asignada. 
	La memoria es puesta a cero.
*/

void	*ft_calloc(size_t c, size_t s)
{
	void	*call;

	call = (void *)malloc(c * s);
	if (!call)
		return (NULL);
	ft_bzero(call, c * s);
	return (call);
}
