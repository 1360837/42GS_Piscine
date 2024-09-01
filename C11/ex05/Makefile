# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiwnam <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 03:15:09 by jiwnam            #+#    #+#              #
#    Updated: 2024/08/31 18:24:24 by jiwnam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  do-op
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCR_DIR = srcs
INCLUDES_DIR = includes
SRCS = $(wildcard $(SRCR_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
