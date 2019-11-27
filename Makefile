# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nristorc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/11 17:52:08 by nristorc          #+#    #+#              #
#    Updated: 2018/01/24 16:16:58 by nristorc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
SRCS = convert_str_int.c \
		  convert_to_array.c \
		  main.c \
		  set_map_dim.c \
		  set_var_menu.c \
		  ft_expose.c \
		  action_with_map.c \
		  keyboard_actions.c \
		  set_tab_coord.c

CC = gcc
CCFLAG = -Wall -Werror -Wextra
MLXFLAGS = -L minilibx_macos/ -lmlx -framework OpenGL -framework AppKit
LIB = -C ./libft/

OBJECT = $(SRCS:.c=.o)
D_SRCS = ./srcs/

all : $(NAME)

%.o:$(D_SRCS)%.c
	$(CC) $(CCFLAG) -I./libft -I/includes -o $@ -c $<

$(NAME) : $(OBJECT)
	make $(LIB)
	$(CC) $(CCFLAG) $(MLXFLAGS) -o $(NAME) $(OBJECT) -L./libft -lft

clean :
	make clean $(LIB)
	/bin/rm -rf $(OBJECT)

fclean : clean
	make fclean $(LIB)
	rm -rf ./$(NAME)

re : fclean all

.PHONY: all clean fclean re
