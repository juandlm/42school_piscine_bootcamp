/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   errors.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 23:26:45 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 23:26:46 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "do_op.h"

long long	check_operator(char *str)
{
	if ((*str == '*' || *str == '/' || *str == '+'
		|| *str == '-' || *str == '%')
			&& *(str + 1) == '\0')
	{
		return (1);
	}
	return (0);
}

long long	check_value(char *val)
{
	if (*val <= '9' && *val >= '0')
	{
		return (1);
	}
	return (0);
}

long long	erreur(char *op, char *b)
{
	if (!(check_operator(op)))
	{
		return (1);
	}
	else if (*op == '/' && atoi(b) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (2);
	}
	else if (*op == '%' && atoi(b) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (2);
	}
	return (0);
}
