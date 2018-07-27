/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   checks.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 19:06:23 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 19:23:06 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "sudoku.h"

int		check_row(int grid[9][9], int row, int nb)
{
	int col;

	col = 0;
	while (col < 9)
	{
		if (grid[row][col] == nb)
			return (TRUE);
		col++;
	}
	return (FALSE);
}

int		check_col(int grid[9][9], int col, int nb)
{
	int row;

	row = 0;
	while (row < 9)
	{
		if (grid[row][col] == nb)
			return (TRUE);
		row++;
	}
	return (FALSE);
}

int		check_box(int grid[9][9], int currentrow, int currentcol, int nb)
{
	int row;
	int col;

	row = 0;
	while (row < 3)
	{
		col = 0;
		while (col < 3)
		{
			if (grid[row + currentrow][col + currentcol] == nb)
				return (TRUE);
			col++;
		}
		row++;
	}
	return (FALSE);
}

int		check_nb(int grid[9][9], int row, int col, int nb)
{
	return (!check_row(grid, row, nb) && !check_col(grid, col, nb)
			&& !check_box(grid, row - (row % 3), col - (col % 3), nb));
}

int		check_unsolved(int grid[9][9], int *row, int *col)
{
	*row = 0;
	while (*row < 9)
	{
		*col = 0;
		while (*col < 9)
		{
			if (grid[*row][*col] == 0)
				return (TRUE);
			(*col)++;
		}
		(*row)++;
	}
	return (FALSE);
}
