/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:50:03 by elerner           #+#    #+#             */
/*   Updated: 2023/03/17 16:58:11 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	La función ft_putstr_fd es una función que toma una cadena de 
	caracteres (string) s y un file descriptor fd, y escribe la cadena 
	de caracteres en el archivo referenciado por el file descriptor. 
	
	La función es similar a la función puts, excepto que en lugar de escribir
	la cadena en la salida estándar, escribe la cadena en un archivo 
	especificado por el file descriptor.
*/

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, &*s++, 1);
}
