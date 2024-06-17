# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebengtss <ebengtss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/24 14:26:10 by ebengtss          #+#    #+#              #
#    Updated: 2024/06/17 17:23:27 by ebengtss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a

CC				=	cc
CFLAGS			=	-Wall -Wextra -Werror
AR				=	ar rcs

SRCS_BONUS		=	ft_lstadd_back.c	ft_lstadd_front.c	ft_lstclear.c		\
					ft_lstiter.c		ft_lstsize.c		ft_lstlast.c		\
					ft_lstmap.c			ft_lstdelone.c		ft_lstnew.c

SRCS			=	ft_isascii.c		ft_isprint.c		ft_strlen.c			\
					ft_isalnum.c		ft_bzero.c			ft_atoi.c			\
					ft_memcpy.c			ft_split.c			ft_memchr.c			\
					ft_calloc.c			ft_strmapi.c		ft_putnbr_fd.c		\
					ft_memmove.c		ft_strlcat.c		ft_toupper.c		\
					ft_memset.c		 	ft_memcmp.c			ft_strjoin.c		\
					ft_strnstr.c		ft_striteri.c		ft_strdup.c			\
					ft_putchar_fd.c		ft_tolower.c		ft_strchr.c			\
					ft_strlcpy.c		ft_itoa.c			ft_putendl_fd.c		\
					ft_strrchr.c		ft_strncmp.c		ft_substr.c			\
					ft_strtrim.c		ft_putstr_fd.c		ft_isalpha.c		\
					ft_isdigit.c

OBJS_BONUS		=	$(SRCS_BONUS:.c=.o)
OBJS			=	$(SRCS:.c=.o)

DEF_COLOR		=	\033[0;39m
MAGENTA			=	\033[0;95m
GREEN			=	\033[0;92m
DEF_WEIGHT		=	\e[0m
BOLD_WEIGHT		=	\e[1m

all				:	$(NAME)

bonus			:	$(OBJS) $(OBJS_BONUS)
	@$(AR) $(NAME) $?
	@echo "$(BOLD_WEIGHT)[LIBFT]$(DEF_WEIGHT) bonus: $(GREEN)OK$(DEF_COLOR)"

$(NAME)			:	$(OBJS)
	@$(AR) $@ $?
	@echo "$(BOLD_WEIGHT)[LIBFT]$(DEF_WEIGHT) make: $(GREEN)OK$(DEF_COLOR)"

%.o				:	%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(BOLD_WEIGHT)[LIBFT]$(DEF_WEIGHT) compiling: $(MAGENTA) $< $(DEF_COLOR)"

clean			:
	@rm -f $(OBJS) $(OBJS_BONUS)
	@echo "$(BOLD_WEIGHT)[LIBFT]$(DEF_WEIGHT) clean: $(GREEN)OK$(DEF_COLOR)"

fclean			:	clean
	@rm -f $(NAME)
	@echo "$(BOLD_WEIGHT)[LIBFT]$(DEF_WEIGHT) fclean: $(GREEN)OK$(DEF_COLOR)"

re				:	fclean all
	@echo "$(BOLD_WEIGHT)[LIBFT]$(DEF_WEIGHT) re: $(GREEN)OK$(DEF_COLOR)"

.PHONY			:	all clean fclean re bonus
