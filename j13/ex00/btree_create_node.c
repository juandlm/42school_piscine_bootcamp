/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   btree_create_node.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 21:35:08 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/21 16:32:32 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	node = (t_btree*)malloc(sizeof(t_btree));
	if (node)
	{
		node->data = item;
		node->left = 0;
		node->right = 0;
	}
	return (node);
}
