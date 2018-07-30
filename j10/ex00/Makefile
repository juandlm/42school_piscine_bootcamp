# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 13:24:09 by jde-la-m     #+#   ##    ##    #+#        #
#    Updated: 2018/07/16 13:24:10 by jde-la-m    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME 	=		libft.a
SRCS 	=		./srcs/ft_putchar.c		\
				./srcs/ft_putstr.c		\
				./srcs/ft_strcmp.c		\
				./srcs/ft_strlen.c		\
				./srcs/ft_swap.c
OBJS 	=		$(SRCS:.c=.o)
HEADERS = 		./includes/ft.h
CFLAGS 	+= 		-Wall -Wextra -Werror -I$(HEADERS)
RM 		=		/bin/rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@ar vrus $@ $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
