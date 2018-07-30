/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 19:32:11 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 22:41:31 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long long nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		ft_putchar(48 + nbr);
	}
}
