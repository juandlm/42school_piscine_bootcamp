/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   grille_dispaly.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 14:47:42 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 16:34:30 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "sudoku.h"

int		grille_display(int **grille)
{
	int		li;
	int		ci;

	li = 0;
	while (li < 9)
	{
		ci = 0;
		while (ci < 9)
		{
			ft_putchar(grille[li][ci] + '0');
			ft_putchar(' ');
			ci = ci + 1;
		}
		ft_putchar('\n');
		li = li + 1;
	}
	return (0);
}
