/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:28:37 by elerner           #+#    #+#             */
/*   Updated: 2023/02/24 03:20:07 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    s: La string a separar.
    c: El carácter delimitador.

    El array de nuevas strings resulatente de la
    separación. NULL si falla la reserva de memoria.
    
    Reserva (utilizando malloc(3)) un array de strings
    resultante de separar la string ’s’ en substrings
    utilizando el caracter ’c’ como delimitador. El
    array debe terminar con un puntero NULL.
*/

/********** MI SPLIT *****************************************/
size_t	ft_splitlen(const char *str, char c)
{
	size_t	len;
	size_t	pos;	

	len = 0;
	pos = 0;
	if (str[pos] == c)
		len--;
	while(str[pos] != '\0')
	{
		if (str[pos + 1] == '\0' || (str[pos] == c && str[pos + 1] != c))
			len++;
		pos++;
	}
	return (len);
}
/*size_t	ft_splitlen(const char *str, char c)
{
	size_t	len;
	char	*tmp;
	char	car[2];

	car[0] = c;
	car[1] = '\0';
	tmp = ft_strtrim(str, car);
	len = 0;
	while (*tmp != '\0')
	{
		if (*tmp == car[0])
			len++;
		tmp++;
	}
	return (len);
}*/

char	*ft_settoken(const char *str, char c)
{
	size_t	len;
	char	*tmp;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	tmp = (char *)malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	len = 0;
	while (str[len] && str[len] != c)
	{
		tmp[len] = str[len];
		len++;
	}
	tmp[len] = '\0';
	return (tmp);
}

char	**ft_split(const char *str, char c)
{
	char	**table;
	size_t	len;

	len = 0;
	if (!str)
		return (NULL);
	table = (char **)malloc((ft_splitlen(str, c) + 1) * sizeof(char *));
	if (!table)
		return (NULL);
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str != c && *str)
		{
			table[len] = ft_settoken(str, c);
			len++;
			while (*str != c && *str)
				str++;
		}
	}
	table[len] = NULL;
	return (table);
}

/*
int main(){
    char cadena[] = "ooo,,,,,Est1o es un text2o, Puede ir, separad3o, p4or punt5os, espaci6os, c7omas.,8ooo";
	//char cadena[100];
    char delimitador[] = "o";
	
	printf("Nro de Tokens: %li\n", ft_splitlen(cadena, 'o'));
    char *token = strtok(cadena, delimitador);
    if(token != NULL){
        while(token != NULL){
            // Sólo en la primera pasamos la cadena; en las siguientes pasamos NULL
            printf("Token: %s\n", token);
            token = strtok(NULL, delimitador);
        }

	printf("-----------------------------------------\n");

	char	**tab;
	unsigned int	i;
	
	i = 0;
	printf("Nro de Tokens: %i\n",str_count("ooo,,,,,Est1o es un text2o, Puede ir, separad3o, p4or punt5os, espaci6os, c7omas.,8ooo", 'o'));
	tab = ft_split("ooo,,,,,Est1o es un text2o, Puede ir, separad3o, p4or punt5os, espaci6os, c7omas.,8ooo", 'o');
	if (!tab[0])
		puts("ok\n");
	while (tab[i] != NULL)
	{
		printf("Token: %s\n", tab[i]);
		i++;
	}
	//printf("\n%s\n", ft_strtrim("ooo,,,,,Est1o es un text2o, Puede ir, separad3o, p4or punt5os, espaci6os, c7omas.,ooo", "o"));
	//puts("\n");
	//printf("PRIMER:%s\n",ft_settoken(",,,,,Est1o es un text2o, Puede ir, separad3o, p4or punt5os, espaci6os, c7omas.,", 'o'));
    }
	/*
    int len;
    const char str[] = "Esto es un texto. Puede ir separado por puntos, espacios o comas.";
    const char ch = 'e';
    char *ret;

	printf("Nro de Separadores: %li\n", ft_splitlen(str, ch));
    ret = ft_memchr(str, ch, strlen(str)+1);
	if(ret == NULL)
	{ret = "No existe separador";}

    printf("%s\n",ret);

	*/
    /*return(0);
}
*/