/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:44:41 by elerner           #+#    #+#             */
/*   Updated: 2023/03/17 16:55:26 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ft_putchar_fd es una función que escribe un solo carácter
	en un archivo "File Descriptor" (fd).
	
	La función toma dos argumentos:
		c: el carácter que se va a escribir en el archivo.
		fd: el descriptor de archivo del archivo en el que se va
			a escribir el carácter.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
