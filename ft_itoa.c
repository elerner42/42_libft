/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:16:02 by elerner           #+#    #+#             */
/*   Updated: 2023/03/13 14:34:45 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	la funcion recibe como parametro un dato de tipo "int", en otras palabras
	puede ser un numero positivo y/o negativo.
	Retorna un valor de tipo "char *", osea una cadena de caracteres.
	gestiona ademas los numeros negativos.
*/

static int	ft_sign(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

static int	ft_lendigi(int n)
{
	int	d;

	if (n == 0)
		return (1);
	d = 0;
	while (n != 0)
	{
		d++;
		n /= 10;
	}
	return (d);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		len;
	int		tmp;
	char	*str;

	tmp = n;
	len = ft_lendigi(n);
	sign = ft_sign(n);
	if (sign == -1)
		len++;
	str = (char *)malloc (sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = ((n % 10) * sign) + '0';
		n = n / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
