# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sandrfer <sandrfer@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 11:48:56 by sandrfer          #+#    #+#              #
#    Updated: 2023/12/21 21:19:54 by sandrfer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
CC 		= gcc
CCFLAGS = -Wall -Werror -Wextra
AR 		= ar rc
RM 		= rm -f

SRC 	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(AR) $(NAME) $(OBJ)

$(OBJ): %.o:%.c
		$(CC) $(CCFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)
fclean: clean
		$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re