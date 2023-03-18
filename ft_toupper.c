/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:12:17 by elerner           #+#    #+#             */
/*   Updated: 2023/03/18 00:15:19 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	La función ft_toupper convierte una letra en minúscula 
	a su correspondiente letra mayúscula en el alfabeto ASCII. 
	Si el carácter pasado como argumento no es una letra minúscula, 
	la función devuelve el mismo carácter sin modificar.
*/

int	ft_toupper(int c)
{
	if (ft_isalpha(c))
	{
		if (c >= 97 && c <= 122)
			return (c - 32);
	}
	return (c);
}
