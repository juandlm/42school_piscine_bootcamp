# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/18 23:35:32 by jde-la-m     #+#   ##    ##    #+#        #
#    Updated: 2018/07/19 19:33:39 by jde-la-m    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME 	=		ft_cat
SRCS 	=		cat.c		\
				functions.c
OBJS 	=		$(SRCS:.c=.o)
HEADER	=		cat.h
CFLAGS 	+= 		-Wall -Wextra -Werror
RM 		=		/bin/rm -f

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(CFLAGS) -I$(HEADER) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
