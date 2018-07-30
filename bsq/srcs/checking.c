/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   checking.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 15:53:43 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/30 13:28:50 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		bsq_check_map(t_grid grid, t_map map)
{
	int		row;
	int		column;
	int		height;
	char	*strtmp;

	strtmp = grid.begin;
	row = grid.row;
	column = grid.col;
	height = map.dimension;
	while (*strtmp)
	{
		if (*strtmp != '\n' &&
			(*strtmp != map.empty && *strtmp != map.obstacle))
			return (-1);
		strtmp++;
	}
	if (row != height || row == 0 || column == 0
			|| grid.size != (grid.col * grid.row))
		return (-1);
	return (0);
}

int		bsq_check_filesize(char *filename)
{
	char	rbuf[11];
	int		fd;

	fd = open(filename, O_RDWR);
	if (read(fd, &rbuf, 10) < 7)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (0);
}

void	bsq_map_error(void)
{
	write(2, "map error\n", 10);
}
