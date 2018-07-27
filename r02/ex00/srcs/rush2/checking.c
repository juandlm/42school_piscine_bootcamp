/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   checking.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 16:41:03 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 21:03:59 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../includes/r2.h"

int		ft_check_rush(t_list *list, int x, int y)
{
	int	rush;

	rush = 9;
	while (list)
	{
		if (list->data == 'o')
			return (0);
		else if (list->data == '/')
			return (1);
		else if (list->data == 'A')
			return (ft_compare_rush(list, x, y));
		list = list->next;
	}
	return (rush);
}

int		ft_compare_rush(t_list *list, int x, int y)
{
	if (x * y == 1)
		return (8);
	else if (x == 1)
	{
		if (ft_list_at(list, (((x + 1) * y) - 1), 'A'))
			return (3);
		if (ft_list_at(list, (((x + 1) * y) - 1), 'C'))
			return (7);
	}
	else if (y == 1)
		if (ft_list_at(list, x, 'C'))
			return (6);
	if (ft_list_at(list, x, 'A'))
		return (2);
	if (ft_list_at(list, (((x + 1) * (y - 1)) + 1), 'A'))
		return (3);
	if (ft_list_at(list, (((x + 1) * (y - 1)) + 1), 'C'))
		return (4);
	return (9);
}

int		check_chars(t_list *list, int rush)
{
	while (list)
	{
		if (rush == 1 && (list->data != '\\' && list->data != '/'
			&& list->data != '*' && list->data != ' ' && list->data != '\n'))
			return (0);
		else if (rush == 0 && (list->data != '-' && list->data != 'o'
			&& list->data != '|' && list->data != ' ' && list->data != '\n'))
			return (0);
		else if (rush > 1 && (list->data != 'A' && list->data != 'B'
			&& list->data != 'C' && list->data != ' ' && list->data != '\n'))
			return (0);
		list = list->next;
	}
	return (1);
}
