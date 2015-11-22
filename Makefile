# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgoeminn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/06/20 20:59:27 by cgoeminn          #+#    #+#              #
#    Updated: 2015/11/22 17:15:13 by cgoeminn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
LNAME = lib/libft

SRCS = \
	   coord.c draw.c hook.c mlx_pixel_wput.c vect_ab.c \
	   vect_crux.c vect_octant_1_4.c vect_octant_5_8.c \
	   main.c \
	\

V = 0

SILENCE_1 :=
SILENCE_0 :=@
SILENCE = $(SILENCE_$(V))

LIB = -L $(LNAME) -lft
LIBMLX = -L/usr/local/lib -lmlx -framework OpenGL -framework AppKit
#LIBX11 = -L/usr/X11 -lXext -lX11 -framework OpenGL -framework AppKit
INCLUDE = -I ./includes
LINCLUDE = -I ./lib/libft/includes
MLXINCLUDE = -I /usr/local/include
CFLAGS = -g -Wall -Werror -Wextra
CC = $(SILENCE)cc
RM = $(SILENCE)rm -rf
MAKE = $(SILENCE)make V=$(V)

SRCPATH = ./sources/

INCLUDES = $(INCLUDE) $(LINCLUDE) $(MLXINCLUDE)

SRC = $(addprefix $(SRCPATH), $(SRCS))
OBJS= $(SRC:.c=.o)

SKIP_1 :=
SKIP_0 := \033[A
SKIP = $(SKIP_$(V))
C = \033[0;33m
U = $(C)[$(NAME)]----->\033[0m

all: $(NAME)

$(NAME):$(OBJS)
	@echo "$(U)$(C)[COMPILE:\033[1;32m DONE\033[0;33m]\033[0m"
	@$(MAKE) all -C $(LNAME)
	@echo "$(U)$(C)[BUILD]\033[0;32m"
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(INCLUDES) $(LIB) $(LIBMLX) #$(LIBX11)
	@echo "$(SKIP)\033[2K$(SKIP)\033[2K"
	@echo "$(SKIP)$(U)$(C)[BUILD  :\033[1;32m DONE$(C)]\033[0m"

%.o: %.c
	@echo "$(U)$(C)[COMPILE: \033[1;31m$<\033[A\033[0m"
	@echo "\033[0;32m"
	$(CC) -o $@ $(CFLAGS) $(INCLUDES) -c $<
	@echo "\033[1;31m [.working.]"
	@echo "$(SKIP)\033[2K\033[A\033[2K$(SKIP)"

clean:
	@$(MAKE) clean -C $(LNAME)
	@echo "$(U)$(C)[CLEAN]\033[1;32m"
	$(RM) $(OBJS)
	@echo "$(SKIP)$(U)$(C)[CLEAN:\033[1;32m   DONE$(C)]\033[0m"

fclean: clean
	$(MAKE) fclean -C $(LNAME)
	@echo "$(U)$(C)[F-CLEAN]\033[1;32m"
	$(RM) $(NAME)
	@echo "$(SKIP)$(U)$(C)[F-CLEAN:\033[1;32m DONE$(C)]\033[0m"

re: fclean all

.PHONY: clean fclean
