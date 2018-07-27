/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   functions.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 22:30:08 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 21:35:09 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "eval.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = nb * -1;
	}
	else
		n = nb;
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

int		ft_atoi(char *str)
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
			return (res);
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * sign);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_do_op(int nb1, int nb2, char op)
{
	if (op == '+')
		return (nb1 + nb2);
	else if (op == '-')
		return (nb1 - nb2);
	else if (op == '/')
		return (nb1 / nb2);
	else if (op == '*')
		return (nb1 * nb2);
	else if (op == '%')
		return (nb1 % nb2);
	return (0);
}
