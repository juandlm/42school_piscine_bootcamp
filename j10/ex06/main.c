/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 18:18:09 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 22:39:07 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "do_op.h"

int	main(int argc, char **argv)
{
	long long	(*op[11])(long long, long long);
	long long	res;
	long long	errcode;

	op[0] = &modulo;
	op[5] = &multiplication;
	op[6] = &addition;
	op[8] = &soustraction;
	op[10] = &division;
	if (argc == 4)
	{
		errcode = erreur(argv[2], argv[3]);
		if (!errcode)
		{
			res = op[*argv[2] - 37](atoi(argv[1]), atoi(argv[3]));
			ft_putnbr(res);
			ft_putchar('\n');
		}
		else if (errcode == 1)
		{
			write(1, "0\n", 2);
		}
	}
	return (0);
}
