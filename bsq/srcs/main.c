/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 15:53:43 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 23:25:40 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/bsq.h"
#include <stdio.h>

int		bsq(char *argv)
{
	int fd;

	fd = 0;
	if (ft_file_size(argv) < 0)
		bsq_map_error();
	else
	{
		fd = open(argv, O_RDWR);
		if (fd < 0)
			bsq_map_error();
		else
			bsq_solver(fd);
		if (fd > 0)
			close(fd);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc <= 1)
		bsq_solver(0);
	else
		while (i < argc)
		{
			bsq(argv[i]);
			if (i != (argc - 1))
				write(1, "\n", 1);
			i++;
		}
	return (0);
}
