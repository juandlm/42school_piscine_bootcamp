/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tools.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 19:32:11 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/31 14:49:43 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nbr)
{
	unsigned int nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nb = -nbr;
	}
	else
		nb = nbr;
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
}

int ft_atoi(char *str)
{
    int sign;
    int res;

    sign = 1;
    res = 0;
    while (*str == '\t' || *str == '\n' || *str == '\r' 
        || *str == '\v' || *str == '\f' || *str == ' ')
        str++;
    if (*str == '-' || *str == '+')
    {
        *str == '-' ? sign = -1 : 1;
        str++;
    }
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return (res * sign);
        res = (res * 10) + (*str - '0');
        str++;
   }
   return (res * sign);
}