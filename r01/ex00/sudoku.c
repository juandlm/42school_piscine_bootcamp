/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sudoku.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 14:47:42 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 19:49:48 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "sudoku.h"

int		solution(int grid[9][9])
{
	int row;
	int col;
	int nb;

	row = 0;
	col = 0;
	nb = 1;
	if (!check_unsolved(grid, &row, &col))
		return (TRUE);
	while (nb <= 9)
	{
		if (check_nb(grid, row, col, nb))
		{
			grid[row][col] = nb;
			if (solution(grid))
				return (TRUE);
			grid[row][col] = 0;
		}
		nb++;
	}
	return (FALSE);
}

void	display_grid(int grid[9][9])
{
	int		row;
	int		col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			ft_putchar(grid[row][col] + '0');
			if (col < 8)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

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

int		main(int argc, char **argv)
{
	int grid[9][9];

	if (argc == 10 && check_params(argc, argv))
	{
		grid_helper(argv, grid);
		if (solution(grid))
			display_grid(grid);
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
