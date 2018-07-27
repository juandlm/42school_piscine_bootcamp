/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   reading.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 15:53:43 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 23:29:31 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/bsq.h"

t_grid	bsq_read_grid(int fd, int bfs)
{
	char	*buf;
	char	*tmp;
	t_grid	grid;

	grid.col = 0;
	grid.row = -1;
	grid.size = 0;
	if (!(buf = malloc(sizeof(*buf) * bfs + 1)))
		return (grid);
	grid.str = NULL;
	while ((bfs = read(fd, buf, bfs)) > 0)
		(grid.str = ft_strncat(grid.str, buf, bfs));
	tmp = grid.str;
	while (*((tmp++)))
	{
		(grid.row != -1 && *tmp != '\n' && *tmp) ? grid.size++ : grid.size;
		(grid.row == 0 && grid.col == 0) ? grid.begin = tmp : grid.begin;
		(grid.row == 0 && *tmp != '\n') ? grid.col++ : grid.col;
		*tmp == '\n' ? grid.row++ : grid.row;
	}
	free(buf);
	return (grid);
}

t_map	bsq_info(t_grid grid)
{
	char	*tmp;
	t_map	map;

	tmp = grid.begin;
	map.solver = *(tmp - 2);
	map.obstacle = *(tmp - 3);
	map.empty = *(tmp - 4);
	*(tmp - 4) = '\0';
	map.dimension = ft_m_atoi(grid.str);
	return (map);
}

int		**bsq_ctoi(t_grid grid, t_map map)
{
	int		i;
	int		j;
	int		**tabres;
	char	*strtmp;

	i = 0;
	strtmp = grid.begin;
	if (!(tabres = malloc(sizeof(tabres) * grid.row + 1)))
		return (0);
	while (*strtmp)
	{
		j = 0;
		tabres[i] = malloc(sizeof(*tabres) * grid.col + 1);
		while (*strtmp && *strtmp != '\n')
		{
			(*strtmp == map.empty) ? tabres[i][j] = 1 : tabres[i][j];
			(*strtmp == map.obstacle) ? tabres[i][j] = 0 : tabres[i][j];
			strtmp++;
			j++;
		}
		strtmp++;
		i++;
	}
	return (tabres);
}
