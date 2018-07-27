/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 08:28:47 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 16:25:55 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "sudoku.h"

int		checknum(int ac, char **av)
{
	int		i;
	int		j;
	int		snum;

	i = 1;
	snum = 0;
	while (i <= ac - 1)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if ((av[i][j] >= 49) && (av[i][j] <= 57))
				snum = snum + 1;
			j = j + 1;
		}
		i = i + 1;
	}
	if (snum >= 17)
		return (1);
	else
		return (0);
}

int		checkvalue(int ac, char **av)
{
	int		i;
	int		j;
	int		chkval;

	i = 1;
	chkval = 0;
	while (i <= ac - 1)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (((av[i][j] >= 49) && (av[i][j] <= 57)) || (av[i][j] == 46))
				chkval = 1;
			else
				return (0);
			j = j + 1;
		}
		if (j != 9)
			return (0);
		i = i + 1;
	}
	return (chkval);
}

int		main(int ac, char **av)
{
	if (ac == 10)
	{
		if ((checkvalue(ac, av) == 1) && (checknum(ac, av) == 1))
		{
			sudoku(av);
		}
		else
		{
			ft_putstr("Error \n");
		}
	}
	else
	{
		ft_putstr("Error \n");
	}
	return (0);
}
