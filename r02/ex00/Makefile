# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/22 22:39:25 by jde-la-m     #+#   ##    ##    #+#        #
#    Updated: 2018/07/22 22:53:19 by jde-la-m    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME 	=	colle-2
NAME00 	=	colle-00
NAME01 	=	colle-01
NAME02 	=	colle-02
NAME03 	=	colle-03
NAME04 	=	colle-04

SRCS0	=	./srcs/rush0/ft_putchar.c	\
			./srcs/rush0/main.c
SRCS00	=	./srcs/rush0/rush00.c
SRCS01	=	./srcs/rush0/rush01.c
SRCS02	=	./srcs/rush0/rush02.c
SRCS03	=	./srcs/rush0/rush03.c
SRCS04	=	./srcs/rush0/rush04.c
SRCS2	=	./srcs/rush2/checking.c		\
			./srcs/rush2/displaying.c	\
			./srcs/rush2/listing.c		\
			./srcs/rush2/printing.c		\
			./srcs/rush2/rushing.c

OBJ0	=	$(SRCS0:.c=.o)
OBJ00	=	$(SRCS00:.c=.o)
OBJ01	=	$(SRCS01:.c=.o)
OBJ02	=	$(SRCS02:.c=.o)
OBJ03	=	$(SRCS03:.c=.o)
OBJ04	=	$(SRCS04:.c=.o)
OBJ2	=	$(SRCS2:.c=.o)

CFLAGS +=	-Wall -Wextra -Werror
HEADERS	=	./includes/
RM 		=	/bin/rm -f

all: $(NAME) $(NAME00) $(NAME01) $(NAME02) $(NAME03) $(NAME04)

$(NAME): $(OBJ2)
	gcc $(CFLAGS) $(OBJ2) -o $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $^ -o $@

$(NAME00): $(OBJ0) $(OBJ00)
	gcc $(CFLAGS) $(OBJ0) $(OBJ00) -o $(NAME00)

$(NAME01): $(OBJ0) $(OBJ01)
	gcc $(CFLAGS) $(OBJ0) $(OBJ01) -o $(NAME01)

$(NAME02): $(OBJ0) $(OBJ02)
	gcc $(CFLAGS) $(OBJ0) $(OBJ02) -o $(NAME02)

$(NAME03): $(OBJ0) $(OBJ03)
	gcc $(CFLAGS) $(OBJ0) $(OBJ03) -o $(NAME03)

$(NAME04): $(OBJ0) $(OBJ04)
	gcc $(CFLAGS) $(OBJ0) $(OBJ04) -o $(NAME04)

clean:
	$(RM) $(OBJ0) $(OBJ00) $(OBJ01) $(OBJ02) $(OBJ03) $(OBJ04) $(OBJ2)

fclean: clean
	$(RM) $(NAME) $(NAME00) $(NAME01) $(NAME02) $(NAME03) $(NAME04)

re: fclean all

rec: all clean

.PHONY: clean all