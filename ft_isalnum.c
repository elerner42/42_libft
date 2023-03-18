/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:31:18 by elerner           #+#    #+#             */
/*   Updated: 2023/03/16 17:10:55 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ft_isalnum(int a), recibe un carater en tipo int y comprueba 
	si el carácter es alfanumérico; es equivalente a 
	(isalpha(c) || isdigit(c))
*/

int	ft_isalnum(int a)
{
	if (ft_isdigit(a) || ft_isalpha(a))
		return (1);
	return (0);
}
