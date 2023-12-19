# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sandrfer <sandrfer@student.42.f>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 11:29:02 by sandrfer          #+#    #+#              #
#    Updated: 2023/12/19 20:52:10 by sandrfer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
CC 		= gcc
CCFLAGS = -Wall -Werror -Wextra
AR 		= ar rc
RM 		= rm -f

SRC 	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c

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