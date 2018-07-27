/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arazanaj <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 16:25:58 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 18:22:32 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check(int x, int y, int i, int j)
{
	if ((i == 0 && j == 0) || (i == (x - 1) && j == 0)
			|| (i == 0 && j == y - 1) || (j == (y - 1) && i == (x - 1)))
		ft_putchar('o');
	else if ((i == 0 && j <= (y - 1))
			|| (i == (x - 1) && j <= (y - 1)))
		ft_putchar('|');
	else if ((i <= (x - 1) && j == 0)
			|| (j == (y - 1) && i <= (x - 1)))
		ft_putchar('-');
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
