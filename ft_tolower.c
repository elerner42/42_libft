/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:40:17 by elerner           #+#    #+#             */
/*   Updated: 2023/03/18 00:10:20 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	La función ft_tolower convierte una letra en mayúscula a su equivalente
	en minúscula. Si el carácter dado no es una letra en mayúscula, 
	la función simplemente devuelve el mismo carácter sin modificarlo.
*/

int	ft_tolower(int c)
{
	if (ft_isalpha(c))
	{
		if (c >= 65 && c <= 90)
			return (c + 32);
	}
	return (c);
}
