/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:31:18 by elerner           #+#    #+#             */
/*   Updated: 2022/09/24 18:31:18 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int d);
int	ft_isalpha(int c);

int	ft_isalnum(int a)
{
	return (ft_isdigit(a) || ft_isalpha(a));
}
