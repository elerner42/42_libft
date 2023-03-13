# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: elerner <elerner@student.42madrid.com>     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/11/02 20:43:57 by elerner           #+#    #+#             #
#   Updated: 202#   Updated: 2022/12/13 18:10:35 by elerner          ###   ########.fr       #                                              #
# ************************************************************************** #

SRCS			=	ft_bzero.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c \
					ft_strlcpy.c \
					ft_strlcat.c \
					ft_strlen.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strncmp.c \
					ft_memchr.c	\
					ft_memcmp.c \
					ft_strnstr.c \
					ft_atoi.c \
					ft_calloc.c \
					ft_strdup.c \
					ft_substr.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_split.c \
					ft_itoa.c 
					
					
OBJS			:= $(SRCS:.c=.o)

CC				:= gcc
RM				:= rm -f
CFLAGS			:= -Wall -Wextra -Werror

NAME			:= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

		@echo "LIBFT -> Make OK!!!"
%.o:%.c
	$(CC) -c $<  #("$<" -> indica el mismo nombre del archivo .c a .o)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:			all clean fclean re bonus

