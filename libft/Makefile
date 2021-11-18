# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 20:26:23 by piboidin          #+#    #+#              #
#    Updated: 2021/10/10 20:31:56 by piboidin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	libft.a
INCLUDES			=	../includes
SRCS 				= 	$(addprefix $(SRCS_DIR), $(SRC_FILES))
SRCS_DIR 			=	src/
SRC_FILES		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
					ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
					ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
					ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
					ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
					ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
					ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c
BONUS_FILES		= 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
					ft_lstmap.c
OBJS				=	$(SRC_FILES:.c=.o)
OBJS_DIR			=	bin/
OBJS_PREFIXED		=	$(addprefix $(OBJS_DIR), $(OBJS))
BONUS_OBJS 			=	$(BONUS_FILES:.c=.o)
BONUS_OBJS_PREFIXED	=	$(addprefix $(OBJS_DIR), $(BONUS_OBJS))
CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra
RM				=	rm -f
AR				=	ar rcs

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c
					@mkdir -p $(OBJS_DIR)
					@echo "Compiling: $<"
					@$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS_PREFIXED)
					@$(AR) $(NAME) $(OBJS_PREFIXED)
					@echo "Libft compiled!"

bonus:			$(BONUS_OBJS_PREFIXED)
					@$(AR) $(NAME) $(BONUS_OBJS_PREFIXED)
					@echo "Libft bonus compiled!"

clean:
					@$(RM) -r $(OBJS_DIR)
					@echo "Libft binary files cleaned!"

fclean:			clean
					@$(RM) $(NAME)
					@echo "Libft executable files cleaned!"

re:				fclean all

.PHONY:			all clean fclean re