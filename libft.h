/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:34:37 by elerner           #+#    #+#             */
/*   Updated: 2022/11/03 15:02:28 by elerner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void		ft_bzero(char *s, size_t n);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		*ft_memset(void *s, int c, size_t n);
size_t		ft_strlen(char *s);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
//size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

#endif
