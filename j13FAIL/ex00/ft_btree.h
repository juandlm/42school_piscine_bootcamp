/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_btree.h                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 21:34:58 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 21:38:36 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <stdlib.h>

typedef struct			s_btree
{
	struct s_btree		*parent;
	struct s_btree		*right;
	struct s_btree		*left;
	void				*data;
}						t_btree;

#endif
