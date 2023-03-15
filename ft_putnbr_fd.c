/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:54:41 by elerner           #+#    #+#             */
/*   Updated: 2023/03/15 23:17:40 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
