/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sudoku.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 14:47:42 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 16:27:14 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "sudoku.h"

int		cell_valid_rules(int **grille, int li, int ci)
{
	int		valn;

	if (grille[li][ci] != 0)
	{
		valn = 1;
		while (valn <= 9)
		{
			if ((chk_line(grille, valn, li) == 1)
				&& (chk_col(grille, valn, ci) == 1)
				&& (chk_blk(grille, valn, li, ci) == 1))
			{
				grille[li][ci] = valn;
				return (1);
			}
			valn = valn + 1;
		}
	}
	return (0);
}

int		cell_cnt_possible(int **grille, int li, int ci)
{
	int		valn;
	int		cpos;

	cpos = 0;
	valn = 1;
	while (valn < 9)
	{
		if ((chk_line(grille, valn, li) == 1)
			&& (chk_col(grille, valn, ci) == 1)
			&& (chk_blk(grille, valn, li, ci) == 1))
			cpos = cpos + 1;
		valn = valn + 1;
	}
	return (cpos);
}

int		sudoku(char **av)
{
	int		**grille;

	grille = grille_alloc();
	grille_init(av, grille);
	grille_display(grille);
	return (0);
}
