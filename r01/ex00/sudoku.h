/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sudoku.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 14:41:45 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 19:22:22 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# define TRUE 1
# define FALSE 0

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		check_row(int grid[9][9], int row, int nb);
int		check_col(int grid[9][9], int col, int nb);
int		check_box(int grid[9][9], int currentrow, int currentcol, int nb);
int		check_nb(int grid[9][9], int row, int col, int nb);
int		check_unsolved(int grid[9][9], int *row, int *col);
int		check_params(int argc, char **argv);
int		nbs_helper(int argc, char **argv);
int		params_helper(int argc, char **argv);

#endif
