/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   doop.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 19:19:09 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 22:21:38 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

long long		get_length(char *str);
long long		atoipower(long long a);
long long		atoi(char *str);
void			ft_putstr(char *str);
void			ft_putchar(char c);
void			ft_putnbr(long long nbr);
long long		erreur(char *op, char *b);
long long		multiplication(long long a, long long b);
long long		division(long long a, long long b);
long long		modulo(long long a, long long b);
long long		addition(long long a, long long b);
long long		soustraction(long long a, long long b);
long long		atoi(char *str);

#endif
