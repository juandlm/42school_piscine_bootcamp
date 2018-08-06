/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tools.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rachel <rachel@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 16:25:58 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/06 14:09:33 by rachel      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
			return (res * sign);
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * sign);
}
