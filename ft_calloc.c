/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:12:33 by elerner           #+#    #+#             */
/*   Updated: 2023/01/12 20:33:45 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ft_calloc asigna  memoria  para  una  matriz  de  nmemb elementos 
	de size bytes cada uno y devuelve un puntero a la memoria asignada. 
	La memoria es puesta a cero.
*/

void	*ft_calloc(size_t n_Element, size_t size_Element)
{
	char	*m_tmp;

	if (size_Element != 0)
		if (n_Element > __SIZE_MAX__ / size_Element)
			return (NULL);
	m_tmp = malloc(n_Element * size_Element);
	if (!m_tmp)
		return (NULL);
	ft_bzero(m_tmp, n_Element * size_Element);
	return (m_tmp);
}
