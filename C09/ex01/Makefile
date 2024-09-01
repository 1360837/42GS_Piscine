# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/29 20:25:28 by jiwnam            #+#    #+#              #
#    Updated: 2024/08/30 20:48:35 by jiwnam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS_DIR = srcs
INCLUDES_DIR = includes
SRCS = $(SRCS_DIR)/ft_putchar.c $(SRCS_DIR)/ft_swap.c $(SRCS_DIR)/ft_putstr.c \
       $(SRCS_DIR)/ft_strlen.c $(SRCS_DIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

#$(OBJS) : $(SRCS)
#	$(CC) $(CFLAGS) -c $^ -o $@

$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
