# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 13:53:08 by lduchemi          #+#    #+#              #
#    Updated: 2023/12/21 13:39:51 by lduchemi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc -Wall -Wextra -Werror -g3
SRC_DIR = ./source
SRCS = $(SRC_DIR)/ft_libft.c \
       $(SRC_DIR)/ft_main.c \
       $(SRC_DIR)/ft_ope2.c \
       $(SRC_DIR)/ft_ope3.c \
       $(SRC_DIR)/ft_ope.c \
	   $(SRC_DIR)/ft_utils.c
HEADER = $(SRC_DIR)/push_swap.h
OBJS = $(SRCS:.c=.o)


$(NAME): $(OBJS)
	$(CC) -o $@ $^

%.o: %.c $(HEADER)
	$(CC) -c -o $@ $<

all: $(NAME)

clean:
	rm -f $(OBJS) $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
