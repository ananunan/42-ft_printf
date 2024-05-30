# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeberius <aeberius@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 20:32:14 by aeberius          #+#    #+#              #
#    Updated: 2024/05/30 20:40:34 by aeberius         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                 Makefile rules                             #
################################################################################

NAME = libftprintf.a

C.FILES = ft_printf.c

OBJECTS = $(C.FILES:.c=.o)

CC = cc

FlAGS = -Wall -Wextra -Werror

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(C.FILES)
	$(CC) $(FLAGS) -c $(C.FILES)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all