/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   btree_insert_data.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 22:13:36 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/10 12:51:14 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*tmp;

	if (!root || !*root || !item)
	{
		if (item && root)
			*root = btree_create_node(item);
		return ;
	}
	tmp = *root;
	if (cmpf(item, tmp->item) < 0)
	{
		if (tmp->left)
			btree_insert_data(&tmp->left, item, cmpf);
		else
			tmp->left = btree_create_node(item);
	}
	else
	{
		if (tmp->right)
			btree_insert_data(&tmp->right, item, cmpf);
		else
			tmp->right = btree_create_node(item);
	}
}
