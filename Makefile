# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajazbuti <ajazbuti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 16:21:25 by ajazbuti          #+#    #+#              #
#    Updated: 2021/09/13 18:02:07 by ajazbuti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_isalnum.c \
	  ft_isascii.c ft_atoi.c ft_bzero.c ft_strchr.c ft_strrchr.c ft_strlcpy.c \
	  ft_strlcat.c ft_strnstr.c ft_strncmp.c ft_tolower.c ft_toupper.c \
	  ft_memcpy.c ft_memset.c ft_memchr.c ft_memcmp.c ft_memmove.c \
	  ft_memccpy.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c 

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c \
		  ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		  ft_lstmap.c

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror -g

SRC_DIR = srcs/

INC_DIR = includes/

SRC_O = ${SRC:.c=.o}

BONUS_O = ${BONUS_SRC:.c=.o}

#  %.o:%.c :\
	${CC} ${FLAGS} -c -I{INC_DIR} ${SRC_O} ${BONUS_O}

all: ${NAME}

${SRC_O}:
	${CC} ${FLAGS} -c -I${INC_DIR} $(addprefix ${SRC_DIR}, ${SRC})

${BONUS_O}:
	${CC} ${FLAGS} -c -I${INC_DIR} $(addprefix ${SRC_DIR}, ${BONUS_SRC})


${NAME}: ${SRC_O}
	ar -r $@ $^

bonus: ${NAME} ${BONUS_O}
	ar -r ${NAME} ${BONUS_O}

clean:
	${RM} ${SRC_O} 

fclean: clean
	${RM} $(NAME)

re: fclean all

.PHONY: all clean fclean re
