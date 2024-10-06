# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miturk <miturk@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 11:02:40 by miturk            #+#    #+#              #
#    Updated: 2024/10/06 07:05:38 by miturk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = libft.a

CC        = cc
CFLAGS    = -Wall -Wextra -Werror
AR        = ar rcs
RM        = rm -f

INCLUDES = -I$(HEADER_DIR)

HEADER_LIST = ./includes/libft.h
HEADER_DIR = ./
HEADER = $(addprefix $(HEADER_DIR), $(HEADER_LIST))

SOURCES_DIR = ./sources/
SOURCES_LIST     =    ft_atoi.c \
      				ft_bzero.c \
        			ft_calloc.c \
        			ft_isalnum.c \
        			ft_isalpha.c \
        			ft_isascii.c \
        			ft_isdigit.c \
        			ft_isprint.c \
        			ft_itoa.c \
        			ft_memchr.c \
        			ft_memcmp.c \
        			ft_memcpy.c \
        			ft_memmove.c \
        			ft_memset.c \
        			ft_putchar_fd.c \
        			ft_putendl_fd.c \
        			ft_putnbr_fd.c \
        			ft_putstr_fd.c \
        			ft_split.c \
        			ft_strchr.c \
        			ft_strdup.c \
        			ft_striteri.c \
        			ft_strjoin.c \
        			ft_strlcat.c \
        			ft_strlcpy.c \
        			ft_strlen.c \
        			ft_strmapi.c \
        			ft_strncmp.c \
        			ft_strnstr.c \
        			ft_strrchr.c \
        			ft_strtrim.c \
        			ft_substr.c \
        			ft_tolower.c \
        			ft_toupper.c \


SOURCES = $(addprefix $(SOURCES_DIR), $(SOURCES_LIST))
OBJECTS_DIR = objects/
OBJECTS_LIST = $(patsubst %.c, %.o, $(SOURCES_LIST))
OBJECTS = $(addprefix $(OBJECTS_DIR), $(OBJECTS_LIST))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS_DIR) $(OBJECTS)
		@$(AR) $(NAME) $(OBJECTS) -o $@

$(OBJECTS_DIR):
	@mkdir -p $(OBJECTS_DIR)

$(OBJECTS_DIR)%.o: $(SOURCES_DIR)%.c $(HEADER)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@$(RM) -r $(OBJECTS) $(OBJECTS_DIR)

fclean: clean
		@$(RM) -f $(NAME) $(OBJECTS_DIR)

re: fclean all
