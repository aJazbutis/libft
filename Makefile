# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 16:21:25 by ajazbuti          #+#    #+#              #
#    Updated: 2022/03/01 19:05:28 by ajazbuti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_isalnum.c \
	  ft_isascii.c ft_atoi.c ft_bzero.c ft_strchr.c ft_strrchr.c ft_strlcpy.c \
	  ft_strlcat.c ft_strnstr.c ft_strncmp.c ft_tolower.c ft_toupper.c \
	  ft_memcpy.c ft_memset.c ft_memchr.c ft_memcmp.c ft_memmove.c \
	  ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
	  ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_utobase.c ft_utoa.c \
	  ft_ultobase.c ft_add_prfx.c ft_atoll.c ft_free_tab.c ft_lstnew.c \
	  ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c ft_lstlast.c \
	  ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lst_issorted.c \
	  get_next_line.c get_next_line_utils.c ft_extension_is_ok.c

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -g

SRC_DIR = ./sources/

INC_DIR = ./includes/

SRC_O = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${SRC_O}
	ar -r $@ $^ 

${SRC_O}: ${SRC_DIR}*c
	${CC} ${CFLAGS} -I${INC_DIR} -c ${addprefix ${SRC_DIR}, ${SRC}}

clean:
	${RM} *o

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
