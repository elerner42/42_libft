/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:35:30 by elerner           #+#    #+#             */
/*   Updated: 2022/12/08 00:36:47 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspase(int c)
{
	if (c == '\n' || c == '\t' || c == '\r' || c == '\v' || c == '\f' || c == ' ')
		return (1);
    return (0);
}

int	ft_atoi(const char *str)
{
    int	sign;
    int	res;

    sign = 1;
    res = 0;
    while (ft_isspase(*str))
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = sign * (-1);
        str++;
    }
    while (ft_isdigit(*str))
    {
        res = (res * 10) + (*str - 48);
        str++;
    } 
    return (res * sign);
}
