/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 15:26:16 by antdelri     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 16:50:36 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../includes/r0.h"

void	middle(int x, int y)
{
	int i;
	int j;

	i = 0;
	if (y > 1 && x > 0)
	{
		while (i < (y - 2))
		{
			ft_putchar('\n');
			ft_putchar('|');
			j = 0;
			while (j < (x - 2))
			{
				ft_putchar(' ');
				j++;
			}
			if (x > 1)
				ft_putchar('|');
			i++;
		}
	}
}

void	bottom(int x, int y)
{
	int i;

	i = 0;
	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('o');
	}
	while (i < (x - 2) && y > 1)
	{
		ft_putchar('-');
		i++;
	}
	if (y > 1 && x > 1)
		ft_putchar('o');
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
		ft_putchar('o');
	while (i < (x - 2) && y > 0)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1 && y > 0)
		ft_putchar('o');
	middle(x, y);
	bottom(x, y);
}
