# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 16:11:24 by alermolo          #+#    #+#              #
#    Updated: 2023/11/14 18:46:05 by alermolo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		libftprintf.a

SRCS = 		ft_printf.c \
			ft_printaddr.c \
			ft_printchar.c \
			ft_printnbr_hex.c \
			ft_printnbr.c \
			ft_printstr.c \

OBJS =		$(SRCS:.c=.o)

HEADER =	libftprintf.h

CC =		cc

CFLAGS =	-Wall -Werror -Wextra

RM =		rm -rf

%.o :		%.c $(HEADER)
			$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

test:		${OBJS}
				$(CC) $(CFLAGS) $(OBJS) -o test

clean:
				$(RM) $(OBJS) $(BOBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus
