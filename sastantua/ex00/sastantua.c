/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sastantua.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 20:41:41 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/30 16:14:26 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> //

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
		len++;
	return (len);
}

void	ft_putnbr(int nbr)
{
	unsigned int nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nb = -nbr;
	}
	else
		nb = nbr;
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
}

int		calc_add(int size)
{
	int add;
	int i;
	int n;

	i = 0;
	n = 1;
	add = size;
	while (i++ < size)
	{
		add += n;
		n++;
	}
	return (add);
}

//total = size + (++i);
//total for size  1 = size + 2 (3) add 2
//total for size  2 = size + 2 + 3 (7) add 5
//total for size  3 = size + 2 + 3 + 4 (12) add 9
//total for size  4 = size + 2 + 3 + 4 + 5 (18) add 14
//total for size  5 = size + 2 + 3 + 4 + 5 + 6 (25) add 20
//total for size  6 = size + 2 + 3 + 4 + 5 + 6 + 7 (33) add 27
//total for size  7 = size + 2 + 3 + 4 + 5 + 6 + 7 + 8 (42) add 35
//total for size  8 = size + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 (52) add 44
void	sastantua(int size)
{
	int rows;
	int space;
	int count;
	int max_length;
	int add;
	//int n;

	add = calc_add(size);
	rows = size + add;
	count = 1;
	//n = 0;
	while (count <= rows)
	{
		max_length = 0;
		space = 1;
		while (space <= (rows - count))
		{
			ft_putchar(' ');
			space++;
		}
		ft_putchar('/'); 
		while (max_length < (2 * count - 1))
		{
			ft_putchar('*');
			max_length++;
		}
		ft_putchar('\\');ft_putnbr(max_length);
		ft_putchar('\n');
		count++;
	}
	printf("Total rows: %d\nCount: %d", rows, count);
}

int		main(int ac, char **av)
{
	if (ac)
		sastantua(atoi(av[1]));
	return (0);
}
