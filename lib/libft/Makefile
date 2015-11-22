#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfanton <gfanton@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 13:57:53 by gfanton           #+#    #+#              #
#    Updated: 2015/01/05 17:13:46 by cgoeminn         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NNAME = ft
INCLUDE = ./includes
SRCPATH = ./srcs/
TAGS = etags --declarations
CFLAGS = -Wall -Werror -Wextra -ansi -pedantic
C = \033[1;34m
SRCS = \
	ft_strnlen.c ft_strnew.c ft_strdel.c ft_striter.c \
	ft_striteri.c ft_strmap.c ft_strmapi.c ft_strclr.c \
	ft_strdup.c ft_strcat.c ft_strncat.c ft_strlcat.c \
	ft_strjoin.c ft_strcpy.c ft_strncpy.c ft_strcmp.c \
	ft_strequ.c ft_strnequ.c ft_strncmp.c ft_strstr.c \
	ft_strnstr.c ft_strsub.c ft_strtrim.c ft_substr.c \
	ft_strchr.c ft_strrchr.c ft_strsplit.c ft_strlen.c \
	ft_strjoin_char.c ft_strgetnext.c \
\
	ft_tabdel.c ft_tabjoin.c ft_tablen.c \
\
	ft_matchn.c ft_match.c ft_matchlen.c ft_matchsplit.c \
	ft_matchpop.c \
\
	get_next_line.c \
\
	ft_qsort.c ft_isort.c \
\
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c \
\
	ft_putstr.c ft_putchar.c ft_putnbr.c ft_putendl.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_tolower.c ft_toupper.c ft_puthex.c \
	ft_puthex_64.c ft_putpointer.c ft_putbase.c \
\
	ft_numlen.c ft_pow.c ft_atoi.c ft_abs.c \
	ft_absl.c ft_sqrt.c ft_isspace.c ft_atoi.c ft_itoa.c \
\
	ft_randinit.c ft_rand.c ft_getrand_array.c ft_rrand.c \
	ft_frrand.c ft_frand.c \
\
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memccpy.c \
	ft_memset.c ft_bzero.c ft_memmove.c ft_memalloc.c \
	ft_memdel.c \
\
	ft_lstnew.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
	ft_lstadd.c ft_lstcmp.c ft_lstdelcmp.c ft_lstinsert.c \
	ft_lstsize.c ft_lst.c \

V = 0
S = 0
G = 0
T = 0
SILENCE_1 :=
SILENCE_0 :=@
SKIP_1 :=
SKIP_0 := \033[A
STAT_1 := displaystat
STAT_0 :=
NORC_1 := norme
NORC_0 :=
DEBUG_1 := -g
DEBUG_0 :=
TAG_1 := tag
TAG_0 :=
TAG = $(TAG_$(T))
STAT = $(STAT_$(S))
SKIP = $(SKIP_$(V))
DEBUG = $(DEBUG_$(G))
SILENCE = $(SILENCE_$(V))
NAME = lib$(NNAME).a
CLNAME = l$(NNAME)
CC = $(SILENCE)gcc
LIB = $(SILENCE)ar rc
RM = $(SILENCE)rm -rf
SRC = $(addprefix $(SRCPATH), $(SRCS))
OBJS= $(SRC:.c=.o)
SKIP_1 :=
SKIP_0 := \033[A
SKIP = $(SKIP_$(V))

W := o
BART := $(shell echo '$(OBJS)'|wc -w|tr -d ' ')
BARC = $(words $W)$(eval W := o $W)
BAR = $(shell printf "%`expr $(BARC) '*' 100 / $(BART)`s" | tr ' ' '=')

U = $(C)[$(NAME)]----->\033[0m

all: $(NORC) $(NAME) $(STAT) $(TAG)

$(NAME):$(OBJS)
	@echo "$(U)$(C)[COMPILE:\033[1;32m DONE$(C)]"
	@echo "$(U)$(C)[BUILD LIB]\033[0;32m"
	$(LIB) $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "$(SKIP)$(U)$(C)[BUILD  :\033[1;32m DONE$(C)]\033[0m\033[K"

.c.o:
	@echo "$(U)$(C)[COMPILE: \033[1;31m$<\033[A\033[0m"
	@echo "\033[0;32m"
	$(CC) -o $@ $(DEBUG) $(CFLAGS) -I $(INCLUDE) -c $<
	@printf "\033[1;31m[%-100s] %s%%\n" $(BAR) `echo $W|wc -w|tr -d ' '`
	@echo "$(SKIP)\033[A\033[2K$(SKIP)"

clean:
	@echo "$(U)$(C)[CLEAN]\033[0;32m"
	$(RM) $(OBJS)
	@echo "$(SKIP)$(U)$(C)[CLEAN:\033[1;32m   DONE$(C)]\033[0m"

fclean: clean
	@echo "$(U)$(C)[F-CLEAN]\033[0;32m"
	$(RM) $(NAME)
	@echo "$(SKIP)$(U)$(C)[F-CLEAN:\033[1;32m DONE$(C)]\033[0m"

displaystat:
	@echo "$(U)$(C)[STATS]\033[0m"
	@echo "|-->[cfiles: `ls -l $(SRCPATH) | grep ".c$$" |wc -l| tr -d ' '`]"
	@echo "     |-->lines : `cat $(SRC) | wc -l | tr -d ' '`"
	@echo "     |-->words : `cat $(SRC) | wc -w | tr -d ' '`"
	@echo "     |-->bytes : `cat $(SRC) | wc -c | tr -d ' '`"
	@echo "\n$(U)$(C)[STATS:  \033[1;32m DONE$(C)]\033[0m"

tag:
	@echo "$(U)$(C)[TAGING]\033[0;32m"
	$(SILENCE)$(TAGS) $(SRC)
	@echo "$(SKIP)$(U)$(C)[TAGING:\033[1;32m DONE$(C)]\033[0m"

re: fclean all

.PHONY: clean fclean
