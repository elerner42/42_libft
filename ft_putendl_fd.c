/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:52:14 by elerner           #+#    #+#             */
/*   Updated: 2023/03/17 17:00:14 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	La función "ft_putendl_fd" es utilizada para imprimir una cadena de 
	caracteres seguida de una nueva línea en el archivo de descriptor 
	especificado.

	Recibe dos parámetros: una cadena de caracteres "s" y un entero "fd" 
	que representa el descriptor de archivo. La función escribe la 
	cadena "s" en el archivo asociado al descriptor "fd", seguida de un 
	carácter de nueva línea.
*/

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
		write(fd, &*s++, 1);
	write(fd, "\n", 1);
}
