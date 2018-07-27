/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_clear.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 03:35:50 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 22:43:26 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *freel;

	if (!begin_list || !*begin_list)
		return ;
	while (*begin_list)
	{
		freel = *begin_list;
		*begin_list = (*begin_list)->next;
		free(freel);
	}
	*begin_list = NULL;
}
