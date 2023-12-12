# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 13:53:08 by lduchemi          #+#    #+#              #
#    Updated: 2023/12/12 13:55:25 by lduchemi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc -Wall -Wextra -Werror
SRC_DIR = ./source
SRCS = $(SRC_DIR)/ft_libft.c \
       $(SRC_DIR)/ft_main.c \
       $(SRC_DIR)/ft_ope2.c \
       $(SRC_DIR)/ft_ope3.c \
       $(SRC_DIR)/ft_ope.c

# Header file
HEADER = $(SRC_DIR)/push_swap.h

# Object files
OBJS = $(SRCS:.c=.o)


$(NAME): $(OBJS)
	$(CC) -o $@ $^

%.o: %.c $(HEADER)
	$(CC) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(NAME)

.PHONY: all clean fclean re
