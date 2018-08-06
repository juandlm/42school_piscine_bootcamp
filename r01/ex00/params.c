/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   params.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rachel <rachel@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 19:52:56 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/06 14:21:32 by rachel      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "sudoku.h"

int		nbs_helper(int argc, char **argv)
{
	int		i;
	int		j;
	int		nbs;

	i = 1;
	nbs = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] >= '1') && (argv[i][j] <= '9'))
				nbs++;
			j++;
		}
		i++;
	}
	if (nbs < 17)
		return (FALSE);
	else
		return (TRUE);
}

int		params_helper(int argc, char **argv)
{
	int		i;
	int		j;
	int		chk;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (((argv[i][j] >= '1') && (argv[i][j] <= '9'))
				|| (argv[i][j] == '.'))
				chk = TRUE;
			else
				chk = FALSE;
			j++;
		}
		if (j != 9)
			chk = FALSE;
		i++;
	}
	return (chk);
}

int		check_params(int argc, char **argv)
{
	return (nbs_helper(argc, argv) && params_helper(argc, argv));
}
