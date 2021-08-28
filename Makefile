# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 16:21:25 by ajazbuti          #+#    #+#              #
#    Updated: 2021/08/27 19:23:34 by ajazbuti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_isalnum.c \
	  ft_isascii.c ft_atoi.c ft_bzero.c ft_strchr.c ft_strrchr.c ft_strlcpy.c \
	  ft_strlcat.c ft_strnstr.c ft_strncmp.c ft_tolower.c ft_toupper.c \
	  ft_memcpy.c ft_memset.c ft_memchr.c ft_memcmp.c ft_memmove.c \
	  ft_memccpy.c
S_O = ft_strlen.o ft_isalpha.o ft_isdigit.o ft_isprint.o ft_isalnum.o \
  	  ft_isascii.o ft_atoi.o ft_bzero.o ft_strchr.o ft_strrchr.o ft_strlcpy.o \
	  ft_strlcat.o ft_strnstr.o ft_strncmp.o ft_tolower.o ft_toupper.o \
	  ft_memcpy.o ft_memset.o ft_memchr.o ft_memcmp.o ft_memmove.o \
	  ft_memccpy.o


all: $(NAME)
	
$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar -r $(NAME) $(S_O)


clean:
	rm -f *.o
fclean:
	rm -f $(NAME)

re: fclean all
