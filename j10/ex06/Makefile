# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 13:24:09 by jde-la-m     #+#   ##    ##    #+#        #
#    Updated: 2018/07/31 14:48:03 by jde-la-m    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME 	=		do-op
SRCS 	=		./srcs/main.c	\
				./srcs/ops.c	\
				./srcs/tools.c
OBJS 	=		$(SRCS:.c=.o)
HEADER	=		./includes/do_op.h
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