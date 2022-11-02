# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/11/02 20:43:57 by elerner           #+#    #+#             #
#   Updated: 202#   Updated: 2022/11/02 21:07:46 by elerner          ###   ########.fr       #                                              #
# ************************************************************************** #

SRCS			=	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
					ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c \
					ft_strlen.c ft_toupper.c ft_tolower.c

OBJS			:= $(SRCS:.c=.o)

CC				:= gcc
RM				:= rm -f
CFLAGS			:= -Wall -Wextra -Werror

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

re:			fclean $(NAME)

.PHONY:			all clean fclean re bonus
