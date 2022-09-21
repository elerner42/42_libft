/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:52:47 by elerner           #+#    #+#             */
/*   Updated: 2022/09/20 22:03:28 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
 
void *ft_memset(void *str, int c, size_t r)
{
	size_t	n;

	if(!str)
		return(NULL);
	n = 0;
	while (n < r)
	{
		*(char*)(str + n) = (char)c;
		n++;
	}
	return (str);
} 

int main()
{
    char str[50] = "cadena de Prueba para memset.";
    printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str+17, '.', 3);
  
    printf("After memset():  %s", str);
    return 0;
}
