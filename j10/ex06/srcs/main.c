/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 18:18:09 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/31 15:05:22 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/do_op.h"

void	check_op(int a, int b, char op)
{
	int res;

	if ((op == '/' || op == '%') && b == 0)
	{
		if (op == '/')
			ft_putstr("Stop : division by zero");
		if (op == '%')
			ft_putstr("Stop : modulo by zero");
	}
	else
	{
		res = do_op(a, b, op);
		ft_putnbr(res);
	}
}

int		do_op(int a, int b, char op)
{
	if (op == '+')
		return (operation[0](a, b));
	else if (op == '-')
		return (operation[1](a, b));
	else if (op == '*')
		return (operation[2](a, b));
	else if (op == '/')
		return (operation[3](a, b));
	else if (op == '%')
		return (operation[4](a, b));
	return (0);
}

int		main(int argc, char **argv)
{
	int a;
	int b;
	char op;
	operation[0] = &add;
	operation[1] = &sub;
	operation[2] = &multiply;
	operation[3] = &divide;
	operation[4] = &mod;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		op = *argv[2];
		check_op(a, b, op);
		ft_putchar('\n');
	}
	return (0);
}
