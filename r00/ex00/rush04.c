/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush04.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arazanaj <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 15:58:16 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 18:40:59 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check(int x, int y, int i, int j)
{
	if ((i == 0 && j == 0)
			|| (i == (x - 1) && j == (y - 1) && x > 1 && y > 1))
		ft_putchar('A');
	else if ((i == x - 1 && j == 0)
			|| (i == 0 && j == (y - 1)))
		ft_putchar('C');
	else if ((i == 0 && j <= (y - 1))
			|| (i == (x - 1) && j <= (y - 1)))
		ft_putchar('B');
	else if ((i <= (x - 1) && j == 0)
			|| (j == (y - 1) && i <= (x - 1)))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			check(x, y, i, j);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
