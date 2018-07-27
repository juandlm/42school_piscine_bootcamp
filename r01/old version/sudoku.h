/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sudoku.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 14:41:45 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 12:54:47 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __SUDOKU_H__
#define __SUDOKU_H__

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

int		ft_atoi(char *str);

int		chk_line(int **grille, int valn, int li);
int		chk_col(int **grille, int valn, int ci);
int		chk_blk(int **grille, int valn, int li, int ci);

int		**grille_alloc();
int		**grille_init(char **av, int **grille);
int		grille_display(int **grille);

int		sudoku(char **grille);

#endif
