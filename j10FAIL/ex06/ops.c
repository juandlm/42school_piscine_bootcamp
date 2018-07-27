/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ops.c                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 19:45:00 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 22:40:59 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "do_op.h"

long long	multiplication(long long a, long long b)
{
	long long	res;

	res = a * b;
	if (a != 0 && res / a != b)
	{
		res = 0;
	}
	return (a * b);
}

long long	division(long long a, long long b)
{
	return (a / b);
}

long long	modulo(long long a, long long b)
{
	return (a % b);
}

long long	addition(long long a, long long b)
{
	long long	res;

	res = a + b;
	if ((a < 0) == (b < 0) && (res < 0) != (a < 0))
	{
		res = 0;
	}
	return (res);
}

long long	soustraction(long long a, long long b)
{
	long long	res;

	res = a - b;
	return (res);
}
