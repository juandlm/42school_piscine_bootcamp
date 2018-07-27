/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push_params.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 03:30:44 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 22:43:40 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*args;
	t_list	*tmp;
	int		i;

	if (ac <= 0)
		return (NULL);
	i = 0;
	tmp = NULL;
	while (i < ac)
	{
		args = ft_create_elem(av[i]);
		args->next = tmp;
		tmp = args;
		i++;
	}
	return (args);
}
