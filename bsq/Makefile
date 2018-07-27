# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/17 10:22:08 by jde-la-m     #+#   ##    ##    #+#        #
#    Updated: 2018/07/25 22:00:17 by jde-la-m    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME 	=		bsq
SRCS 	=		./srcs/checking.c	\
				./srcs/main.c		\
				./srcs/reading.c		\
				./srcs/solving.c		\
				./srcs/tools.c
OBJS 	=		$(SRCS:.c=.o)
HEADER	=		./includes/bsq.h
CFLAGS 	+= 		-Wall -Wextra -Werror
RM 		=		/bin/rm -f

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	gcc $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all