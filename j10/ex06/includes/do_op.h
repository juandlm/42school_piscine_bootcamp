/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   do_op.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 19:19:09 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/31 13:47:32 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		ft_atoi(char *str);
int 	do_op(int a, int b, char op);
int		add(int a, int b);
int		sub(int a, int b);
int		multiply(int a, int b);
int		divide(int a, int b);
int		mod(int a, int b);
int 	(*operation[5])(int, int);

#endif
