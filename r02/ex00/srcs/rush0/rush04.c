/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush04.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 15:33:50 by antdelri     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 16:49:11 by jde-la-m    ###    #+. /#+    ###.fr     */
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
			ft_putchar('B');
			j = 0;
			while (j < (x - 2))
			{
				ft_putchar(' ');
				j++;
			}
			if (x > 1)
				ft_putchar('B');
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
		ft_putchar('C');
	}
	while (i < (x - 2) && y > 1)
	{
		ft_putchar('B');
		i++;
	}
	if (y > 1 && x > 1)
		ft_putchar('A');
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
		ft_putchar('A');
	while (i < (x - 2) && y > 0)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1 && y > 0)
		ft_putchar('C');
	middle(x, y);
	bottom(x, y);
}
