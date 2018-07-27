/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sudoku2.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 14:35:11 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 17:57:58 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "sudoku.h"

/* Ligne: on vérifie chaque colonne dans la ligne donnée en argument.
   On va vérifier que le numéro donné en argument n'est présent dans la ligne.
   Si on le trouve, on arrête et on retourne TRUE. */

int		check_row(int grid[9][9], int row, int nb)
{
	int col;

	col = 0;
	while (col < 9)
	{
		if (grid[row][col] == nb)
			return (TRUE);
		col++;
	}
	return (FALSE);
}

/* Colonne: on vérifie chaque ligne dans la colonne donnée en argument.
   On va vérifier que le numéro donné en argument n'est pas présent dans la colonne.
   Si on le trouve, on arrête et on retourne TRUE. */

int		check_col(int grid[9][9], int col, int nb)
{
	int row;

	row = 0;
	while (row < 9)
	{
		if (grid[row][col] == nb)
			return (TRUE);
		row++;
	}
	return (FALSE);
}

/* Bloc: on vérifie enfin chaque bloc de la grille et ceci en ne parcourrant pas
   plus de 3 lignes et 3 colonnes depuis les lignes et colonnes de départ données
   en argument.
   On va vérifier que le numéro donné en argument n'est pas présent dans le bloc.
   Si on le trouve, on arrête et on retourne TRUE. */

int		check_box(int grid[9][9], int currentrow, int currentcol, int nb)
{
	int row;
	int col;

	row = 0;
	while (row < 3)
	{
		col = 0;
		while (col < 3)
		{
			if (grid[row + currentrow][col + currentcol] == nb)
				return (TRUE);
			col++;
		}
		row++;
	}
	return (FALSE);
}

/* Chiffre: Ici on regroupe les 3 fonctions du dessus afin de s'assurer que
   le chiffre donné en argument n'est pas présent ni dans la ligne, ni dans la
   colonne ni dans le bloc donnés. */

int		check_nb(int grid[9][9], int row, int col, int nb)
{
	return (!check_row(grid, row, nb) && !check_col(grid, col, nb)
			&& !check_box(grid, row - (row % 3), col - (col % 3), nb));
}

/* Grille: est-ce qu'il reste des cases à résoudre ? Au premier 0 trouvé, on
   considère que la grille n'a pas éte résolue e et on renvoie TRUE. Si l'on ne
   trouve pas de 0, on renvoie FALSE. On vérifie chaque colonne de chaque ligne. */

int		check_unsolved(int grid[9][9], int *row, int *col)
{
	*row = 0;
	while (*row < 9)
	{
		*col = 0;
		while (*col < 9)
		{
			if (grid[*row][*col] == 0)
				return (TRUE);
			(*col)++;
		}
		(*row)++;
	}
	return (FALSE);
}

/* Solution: D'abord vérifier si la grille a été résolue, si $check_unsolved renvoie
   FALSE, on considère que le soduko a été résolu, on arrête et on renvoie TRUE, sinon,
   on commence la solution.
   On va essayer chaque entier de 1 à 9 dans la grille. On appelle la fonction $check_nb
   pour vérifier que le chiffre donné est bien unique dans la grille entière. Si toutes
   les cases ont été résolues et que chaque chiffre est unique on considère le sudoku
   résolu et on renvoie TRUE. */

int		solution(int grid[9][9])
{
	int row;
	int col;
	int nb;

	row = 0;
	col = 0;
	nb = 1;
	if (!check_unsolved(grid, &row, &col))
		return (TRUE);
	while (nb <= 9)
	{
		if (check_nb(grid, row, col, nb))
		{
			grid[row][col] = nb;
			if (solution(grid))
				return (TRUE);
			grid[row][col] = 0;
		}
		nb++;
	}
	return (FALSE);
}

/* Affichage de la grille */

void	display_grid(int grid[9][9])
{
	int		row;
	int		col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			ft_putchar(grid[row][col] + '0');
			ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

/* Gestion des paramètres */

int		*grid_helper(char **argv, int grid[9][9])
{
	int		row;
	int		col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if ((argv[row + 1][col] >= '1') && (argv[row + 1][col] <= '9'))
				grid[row][col] = argv[row + 1][col] - '0';
			else
				grid[row][col] = 0;
			col++;
		}
		row++;
	}
	return (grid[9]);
}

int		check_params(int argc, char **argv)
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
			if (((argv[i][j] >= '1') && (argv[i][j] <= '9')) || (argv[i][j] == '.'))
				chk = TRUE;
			else
				chk = FALSE;
			j++;
		}
		if (j != 9)
			return (FALSE);
		i++;
	}
	return (chk);
}

int		main(int argc, char **argv)
{
	int grid[9][9];

	if (argc == 10 && check_params(argc, argv))
	{
		grid_helper(argv, grid);
		if (solution(grid))
			display_grid(grid);
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
