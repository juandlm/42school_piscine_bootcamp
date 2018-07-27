/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_at.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 03:38:38 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/21 23:51:25 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (!begin_list)
		return (NULL);
	while (nbr-- && begin_list)
		begin_list = begin_list->next;
	return (begin_list);
}
