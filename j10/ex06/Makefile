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

NAME = do-op

SRC = ./errors.c ./functions.c ./main.c ./ops.c ./atoi.c

OUTPUT = ./errors.o ./functions.o ./main.o ./ops.o ./atoi.o

DIRH = ./includes

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c -I$(DIRH) $(SRC) 
	gcc $(OUTPUT) -o $(NAME)

clean:
	rm -f $(OUTPUT)

fclean: clean
	rm -f $(NAME)

re: fclean all
