# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/03 14:09:30 by gbrittan          #+#    #+#              #
#    Updated: 2020/11/07 19:56:13 by gbrittan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.PHONY: NAME GCC INCL CFLAGS SRC OBJ all clean fclean re

NAME	= libft.a
CC		= gcc
INCL    = ./
CFLAGS	= -Wall -Wextra -Werror -I $(INCL) -c

SRC 	= ft_toupper.c		\
		 ft_bzero.c			\
		 ft_isalnum.c		\
		 ft_ischar.c		\
		 ft_isdigit.c		\
		 ft_islower.c		\
		 ft_isprint.c		\
		 ft_isspace.c		\
		 ft_isupper.c		\
		 ft_memcmp.c		\
		 ft_memcpy.c		\
		 ft_memset.c		\
		 ft_putchar_fd.c	\
		 ft_strlen.c		\
		 ft_strncmp.c		\
		 ft_strrev.c		\
		 ft_tolower.c		\
		 ft_atoi.c			\
		 ft_isascii.c		\
		 ft_isalpha.c		\
		 ft_strnstr.c		\
		 ft_strlcat.c		\
		 ft_strlcpy.c		\
		 ft_strchr.c		\
		 ft_strrchr.c		\
		 ft_memccpy.c		\
		 ft_memchr.c		\
		 ft_memmove.c		\
		 ft_strdup.c		\
		 ft_strcpy.c		\
		 ft_calloc.c		\
		 ft_putstr_fd.c		\
		 ft_putnbr_fd.c		\
		 ft_putendl_fd.c	\
		 ft_strjoin.c		\

OBJ		= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
