/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   checking.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 19:52:56 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/08 21:36:20 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "sudoku.h"

int		*grid_helper(char **argv, int grid[9][9])
{
	int		row;
	int		col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if ((argv[row + 1][col] >= '1') && (argv[row + 1][col] <= '9'))
				grid[row][col] = argv[row + 1][col] - '0';
			else
				grid[row][col] = 0;
			col++;
		}
		row++;
	}
	return (grid[9]);
}

int		nb_helper(int argc, char **argv)
{
	int		i;
	int		j;
	int		count;

	i = 1;
	count = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] >= '1') && (argv[i][j] <= '9'))
				count++;
			j++;
		}
		i++;
	}
	if (count < 17)
		return (FALSE);
	else
		return (TRUE);
}

int		param_helper(int argc, char **argv)
{
	int		i;
	int		j;
	int		check;

	i = 1;
	check = FALSE;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (((argv[i][j] >= '1') && (argv[i][j] <= '9'))
				|| (argv[i][j] == '.'))
				check = TRUE;
			else
				return (FALSE);
			j++;
		}
		if (j != 9)
			return (FALSE);
		i++;
	}
	return (check);
}

int		check_params(int argc, char **argv)
{
	return (nb_helper(argc, argv) && param_helper(argc, argv));
}
