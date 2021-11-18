# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 19:59:58 by piboidin          #+#    #+#              #
#    Updated: 2021/10/10 20:46:48 by piboidin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
INCLUDES	= includes
LIBFT		= libft
SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_FILES))
SRCS_DIR	= src/
SRCS_FILES	= ft_printf.c ft_printf_utils.c ft_ptr_printer.c ft_hex_printer.c ft_uns_nbr_printer.c
OBJS		= $(SRCS_FILES:.c=.o)
OBJS_DIR	= bin/
OBJS_PREFIX	= $(addprefix $(OBJS_DIR), $(OBJS))
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -f
AR			= ar rcs

all:			$(NAME)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
					@mkdir -p $(OBJS_DIR)
					@echo "Compling : $< "
					@$(CC) $(CFLAGS) -I $(INCLUDES) -c -o $@ $<

$(NAME):		$(OBJS_PREFIX) $(OBJS_DIR) $(INCLUDES)
					@make -C $(LIBFT)
					@cp libft/libft.a .
					@mv libft.a $(NAME)
					@echo "Maybe Fiinished ? Oh no !!"
					@$(AR) $(NAME) $(OBJS_PREFIX)
					@echo "ft_printf compiled!"

clean:
					@$(RM) -r $(OBJS_DIR)
					@make clean -C $(LIBFT)
					@echo "ft_print binary files cleaned!"

fclean:			clean
					@$(RM) $(NAME)
					@$(RM) $(LIBFT)/libft.a
					@echo "ft_printf executable files cleaned!"
					@echo "libft executable files cleaned!"

re:					fclean all
					@echo "Cleaned and rebuild everything for ft_printf!"

.PHONY:			all clean fclean re
