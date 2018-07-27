/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_remove_if.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 23:30:33 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 23:32:42 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;

	if (!begin_list || !*begin_list)
		return ;
	while (*begin_list)
	{
		tmp = *begin_list;
		if ((*cmp)(tmp->data, data_ref) == 0)
			free(tmp);
		*begin_list = (*begin_list)->next;
	}
}
