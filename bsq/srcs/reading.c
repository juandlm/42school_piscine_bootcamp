/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   reading.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 15:53:43 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/09 22:40:29 by jde-la-m    ###    #+. /#+    ###.fr     */
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
	int		**tab;
	char	*tmp;

	i = 0;
	tmp = grid.begin;
	if (!(tab = malloc(sizeof(tab) * grid.row + 1)))
		return (0);
	while (*tmp)
	{
		j = 0;
		if (!(tab[i] = malloc(sizeof(*tab) * grid.col + 1)))
			return (0);
		while (*tmp && *tmp != '\n')
		{
			(*tmp == map.empty) ? tab[i][j] = 1 : tab[i][j];
			(*tmp == map.obstacle) ? tab[i][j] = 0 : tab[i][j];
			tmp++;
			j++;
		}
		tmp++;
		i++;
	}
	return (tab);
}
