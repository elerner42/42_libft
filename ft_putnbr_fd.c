/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:54:41 by elerner           #+#    #+#             */
/*   Updated: 2023/03/17 17:25:15 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	La función ft_putnbr_fd toma un entero n y lo imprime en la salida 
	especificada por el file descriptor fd, utilizando la función write. 
	Primero, comprueba si el número es negativo y lo imprime con un signo 
	negativo si es el caso. Luego, divide el número por 10 de forma repetida 
	y lo imprime en cada iteración hasta que se hayan impreso todos los 
	dígitos del número. Para imprimir cada dígito, convierte el número a su 
	carácter ASCII correspondiente mediante la adición del valor ASCII 
	del carácter '0'.
	https://es.calcuworld.com/calculadoras-matematicas/calculadora-de-resto/
*/

void	ft_putnbr_fd(int n, int fd)
{
	long long	nro;

	nro = (long long )n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nro = nro * (-1);
	}
	if (nro > 9)
		ft_putnbr_fd(nro / 10, fd);
	ft_putchar_fd(nro % 10 + 48, fd);
}
