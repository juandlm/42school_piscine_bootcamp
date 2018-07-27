/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   grille_intialize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 12:44:14 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 16:45:49 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "sudoku.h"

int		**grille_alloc(void)
{
	int		ci;
	int		**grille;

	if (!(grille = (int**)malloc(sizeof(int*) * 9)))
		return (0);
	ci = 0;
	while (ci < 9)
	{
		if (!(grille[ci] = (int*)malloc(sizeof(int) * 9)))
			return (0);
		ci = ci + 1;
	}
	return (grille);
}

int		**grille_init(char **av, int **grille)
{
	int		li;
	int		ci;

	li = 0;
	while (li < 9)
	{
		ci = 0;
		while (ci < 9)
		{
			if ((av[li+1][ci] >= 49) && (av[li+1][ci] <= 57))
				grille[li][ci] = av[li+1][ci] - 48;
			else
				grille[li][ci] = 0;
			ci = ci + 1;
		}
		li = li + 1;
	}
	return (grille);
}
