gcc -c -Wall -Wextra -Werror ft_putchar.c
gcc -c -Wall -Wextra -Werror ft_putstr.c
gcc -c -Wall -Wextra -Werror ft_strcmp.c
gcc -c -Wall -Wextra -Werror ft_strlen.c
gcc -c -Wall -Wextra -Werror ft_swap.c

ar rc libft.a ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o
