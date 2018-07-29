/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sastantua.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 20:41:41 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 20:51:59 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
		len++;
	return (len);
}

void	sastantua(int size)
{
	int row;
	int space;
	int count;
	int max_length;

	row = size;
	count = 1;
	while (count <= row)
	{
		max_length = 0;
		space = 1;
		while (space <= row - count)
		{
			ft_putchar(' ');
			++space;
		}
		while (max_length != 2 * count - 1)
		{
			ft_putchar('*');
			++max_length;
		}
		ft_putchar('\n');
		++count;
	}
}


int main(int ac, char **av)
{
	if (ac)
		sastantua(atoi(av[1]));
	return (0);
}
