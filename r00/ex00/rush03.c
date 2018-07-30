/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush03.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 16:25:58 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/30 13:18:40 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_rush(int x, int y, int i, int j)
{
	if ((i == 0 && j == 0)
			|| (i == 0 && j == (y - 1)))
		ft_putchar('A');
	else if ((i == (x - 1) && j == 0)
			|| (i == (x - 1) && j == (y - 1)))
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

	if (x > 0 && y > 0)
	{
		j = 0;
		while (j < y)
		{
			i = 0;
			while (i < x)
			{
				print_rush(x, y, i, j);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
}
