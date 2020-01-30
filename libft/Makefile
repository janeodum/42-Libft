# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaodum <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/19 09:28:55 by jaodum            #+#    #+#              #
#    Updated: 2020/01/02 17:35:43 by jaodum           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PREFIX = ft
NAME = lib$(PREFIX).a

RESET = \033[0m
PURPLE = \033[1;35m
GREEN = \033[1;32m
YELLOW = \033[1;33m

SRC = ft_strlen.c \
	   ft_strdup.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strlcat.c \
	   ft_strstr.c \
	   ft_strnstr.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_atoi.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_putendl.c \
	   ft_putnbr.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_strsplit.c \
	   ft_strtrim.c \
	   ft_itoa.c \
	   ft_lstnew.c \
	   ft_lstpush.c \
	   ft_lstdel.c \
	   ft_lstadd.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_count.c \
	   ft_intlen.c \
	   ft_lstdelone.c \
	   ft_strequ.c \
	   ft_strjoin.c \
	   ft_strsub.c \
	   ft_strwhitespace.c \
	   ft_strnequ.c \

INC_DIR = include

OBJS = $(SRC : .c = .o)

all: $(NAME)

$(NAME):
	gcc -Werror -Wall -Wextra -c $(SRC) -I$(INC_DIR)
	ar rcs $(NAME) *.o

clean:
	@echo "$(YELLOW)Deleting objects files...$(RESET)"
	rm -rf *.o

fclean: clean
	@echo "$(YELLOW)Deleting ...$(RESET)"
	rm -f $(NAME)
	@echo "$(GREEN)The  '$(NAME)' has been deleted !$(RESET)"

licorne:
	@echo "$(PURPLE)Searching for the universal answer...$(RESET)"
	@echo "$(PURPLE)The answer is... Hmmmmm... Maybe... No... OHHHH !!! The answer is: $(RESET)"
	@echo "🦄$(YELLOW) Gaetan the master of the Universe"

re: fclean all

.PHONY: re licorne fclean clean
