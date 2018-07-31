/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   eval.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 22:30:03 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/30 16:39:29 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef EVAL_H
# define EVAL_H

# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		ft_do_op(int nb1, int nb2, char op);
int		eval_expr(char *str);
int		main_operation(char **str);
int		par_parentheses(char **str);
int		par_multiplication(char **str);
char	*par_whitespaces(char *str);

#endif
