/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   display_file.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 23:50:10 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 21:25:11 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "display_file.h"

void	ft_display(char *filename)
{
	int		fd;
	char	buf[256];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return ;
	while (write(1, &buf, read(fd, &buf, 256)) > 0)
		;
	close(fd);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display(argv[1]);
	return (0);
}
