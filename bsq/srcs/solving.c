/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   solving.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/25 21:28:20 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 23:01:01 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	bsq_solver(int fd)
{
	//int		index;
	int		**tab;
	t_grid	grid;
	t_coord	coord;
	t_map	map;

	//index = 1;
	tab = 0;
	grid = bsq_read_grid(fd, BUFF_SIZE);
	map = bsq_info(grid);
	if (bsq_check_map(grid, map) == 0)
	{
		tab = bsq_ctoi(grid, map);
		coord = bsq_algorithm(tab, grid);
		bsq_fill_tab(tab, coord, grid);
		bsq_display(tab, grid, map);
		free(tab);
	}
	else
		bsq_map_error();
}

void	bsq_fill_tab(int **tab, t_coord coord, t_grid grid)
{
	int	i;
	int	j;

	i = coord.row - coord.max + 1;
	j = coord.col - coord.max + 1;
	if (coord.max > 1)
	{
		while (i <= coord.row)
		{
			j = coord.col - coord.max + 1;
			while (j <= coord.col)
			{
				tab[i][j] = -1;
				j++;
			}
			i++;
		}
	}
	else
		bsq_fill_tab_once(tab, grid);
}

void	bsq_fill_tab_once(int **tab, t_grid grid)
{
	int	i;
	int	j;

	i = 0;
	while (i < grid.row)
	{
		j = 0;
		while (j < grid.col)
		{
			if (tab[i][j] == 1)
			{
				tab[i][j] = -1;
				return ;
			}
			j++;
		}
		i++;
	}
}

t_coord	bsq_algorithm(int **tab, t_grid grid)
{
	int		i;
	int		j;
	t_coord	coord;

	coord.max = 1;
	i = 0;
	while (++i < grid.row)
	{
		j = 0;
		while (++j < grid.col)
		{
			if (tab[i][j])
			{
				tab[i][j] = ft_min(tab[i - 1][j - 1],
							tab[i - 1][j], tab[i][j - 1]) + 1;
				if (tab[i][j] > coord.max)
				{
					coord.max = tab[i][j];
					coord.row = i;
					coord.col = j;
				}
			}
		}
	}
	return (coord);
}

void	bsq_display(int **tab, t_grid grid, t_map map)
{
	int i;
	int j;

	i = 0;
	while (i < grid.row)
	{
		j = 0;
		while (j < grid.col)
		{
			if (tab[i][j] == 0)
				write(1, &map.obstacle, 1);
			else if (tab[i][j] == -1)
				write(1, &map.solver, 1);
			else
				write(1, &map.empty, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
