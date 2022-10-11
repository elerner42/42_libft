# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/10/11 20:47:36 by elerner           #+#    #+#             #
#   Updated: 202#   Updated: 2022/10/11 23:00:40 by elerner          ###   ########.fr       #                                                              #
# ************************************************************************** #

SRCS			=	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
					ft_isprint.c ft_memccpy.c ft_memmove.c ft_memset.c ft_strlcat.c \
					ft_strlcpy.c ft_strlen.c

OBJS			:= $(SRCS:.c=.o)

CC				:= gcc
RM				:= rm -f
CFLAGS			:= -Wall -Wextra -Werror -I.

NAME			:= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

%.o:%.c
	$(CC) -c $<  #($< -> indica el mismo nombre del archivo .c a .o)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
