/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   checking.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 15:53:43 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 22:51:39 by jde-la-m    ###    #+. /#+    ###.fr     */
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
		{
			return (-1);
		}
		strtmp++;
	}
	if (row != height || row == 0 || column == 0
			|| grid.size != (grid.col * grid.row))
		return (-1);
	return (0);
}

void	bsq_map_error(void)
{
	write(2, "map error\n", 10);
}
