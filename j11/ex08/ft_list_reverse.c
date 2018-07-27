/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_reverse.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 03:47:26 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 01:12:14 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *before;
	t_list *next;
	t_list *curr;

	before = 0;
	curr = *begin_list;
	while (curr)
	{
		next = curr->next;
		curr->next = before;
		before = curr;
		curr = next;
	}
	*begin_list = before;
}
