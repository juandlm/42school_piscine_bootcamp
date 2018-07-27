/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 09:27:41 by antdelri     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 16:51:40 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../includes/r0.h"

int		check1(char **argv)
{
	int i;
	int xr;

	xr = 0;
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			xr = xr * 10;
			xr = xr + argv[1][i] - '0';
		}
		else
		{
			argv[1][i + 1] = '\0';
			xr = 0;
			return (xr);
		}
		i++;
	}
	return (xr);
}

int		check2(char **argv)
{
	int i;
	int yr;

	yr = 0;
	i = 0;
	while (argv[2][i])
	{
		if (argv[2][i] >= '0' && argv[2][i] <= '9')
		{
			yr = yr * 10;
			yr = yr + argv[2][i] - '0';
		}
		else
		{
			argv[2][i + 1] = '\0';
			yr = 0;
			return (yr);
		}
		i++;
	}
	return (yr);
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	if (argc == 3)
	{
		x = check1(argv);
		y = check2(argv);
		rush(x, y);
	}
	return (0);
}
