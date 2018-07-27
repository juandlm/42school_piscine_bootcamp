/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rushing.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 16:41:03 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 21:14:15 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../includes/r2.h"

int		coord_y(t_list *list)
{
	unsigned int y;

	y = 0;
	if (!list)
		return (0);
	while (list)
	{
		if (list->data == '\n')
			y++;
		list = list->next;
	}
	return (y);
}

int		coord_x(t_list *list)
{
	unsigned int x;
	unsigned int y;

	x = 0;
	y = coord_y(list);
	if (!list)
		return (0);
	while (list)
	{
		if (list->data != '\n')
			x++;
		list = list->next;
	}
	return (x / y);
}

int		main(int argc, char **argv)
{
	t_list	*list;
	int		x;
	int		y;
	int		rush;
	int		check;

	if (argc && argv)
	{
		list = ft_pipe_output();
		y = coord_y(list);
		x = coord_x(list);
		rush = ft_check_rush(list, x, y);
		check = check_chars(list, rush);
		free(list);
		if (rush == 9 || !check)
			ft_putstr("aucune");
		else
			ft_display_first(rush, x, y);
	}
	ft_putchar('\n');
	return (0);
}
