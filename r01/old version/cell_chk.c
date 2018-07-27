/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   chk_element.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 09:22:03 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 12:56:30 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "sudoku.h"

int		chk_line(int **grille, int valn, int li)
{
	int		ci;

	ci = 0;
	while (ci < 9)
	{
		if (grille[li][ci] != valn)
			return (1);
		ci = ci + 1;
	}
	return (0);
}

int		chk_col(int **grille, int valn, int ci)
{
	int		li;

	li = 0;
	while (li < 9)
	{
		if (grille[li][ci] != valn)
			return (1);
		li = li + 1;
	}
	return (0);
}

int		chk_blk(int **grille, int valn, int li, int ci)
{
	int		bli;
	int		bci;

	bli = li - (li % 3);
	bci = ci - (ci % 3);
	while (bli < 3)
	{
		while (bci < 3)
		{
			if (grille[bli][bci] != valn)
				return (1);
			bci = bci + 1;
		}
		bli = bli + 1;
	}
	return (0);
}
