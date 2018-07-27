/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   listing.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 19:24:37 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 21:22:38 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../includes/r2.h"

t_list	*ft_create_elem(char c)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
	if (elem)
	{
		elem->data = c;
		elem->next = NULL;
	}
	return (elem);
}

void	ft_list_push_back(t_list **begin_list, char c)
{
	t_list *elem;

	if (begin_list && *begin_list)
	{
		elem = *begin_list;
		while (elem->next)
			elem = elem->next;
		elem->next = ft_create_elem(c);
	}
	else
		*begin_list = ft_create_elem(c);
}

int		ft_list_at(t_list *begin_list, int nbr, int verif)
{
	while (nbr-- > 1 && begin_list)
		begin_list = begin_list->next;
	if (begin_list->data == verif)
		return (1);
	return (0);
}

t_list	*ft_pipe_output(void)
{
	char	buf;
	t_list	*list;

	list = NULL;
	while (read(0, &buf, 1))
		ft_list_push_back(&list, buf);
	return (list);
}
