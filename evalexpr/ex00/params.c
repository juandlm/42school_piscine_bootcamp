/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   params.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 22:30:22 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 21:44:09 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "eval.h"

int		main_operation(char **str)
{
	int		n1;
	int		n2;
	char	op;

	n1 = par_parentheses(str);
	while ((*str)[0] && (*str)[0] != ')')
	{
		op = (*str)[0];
		(*str)++;
		if (op == '+' || op == '-')
			n2 = par_multiplication(str);
		else
			n2 = par_parentheses(str);
		n1 = ft_do_op(n1, n2, op);
	}
	return (n1);
}

char	*par_whitespaces(char *str)
{
	int		i;
	int		j;
	char	*str1;

	i = 0;
	j = 0;
	str1 = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i])
	{
		if (str[i] != ' ')
		{
			str1[j] = str[i];
			j++;
		}
		i++;
	}
	str1[j] = '\0';
	return (str1);
}

int		par_parentheses(char **str)
{
	int		n;
	int		sign;

	n = 0;
	sign = 1;
	if ((*str)[0] == '+' || (*str)[0] == '-')
	{
		if ((*str)[0] == '-')
			sign = -1;
		(*str)++;
	}
	if ((*str)[0] == '(')
	{
		(*str)++;
		n = main_operation(str);
		if ((*str)[0] == ')')
			(*str)++;
		return (sign * n);
	}
	while ('0' <= (*str)[0] && (*str)[0] <= '9')
	{
		n = (n * 10) + (*str)[0] - '0';
		(*str)++;
	}
	return (sign * n);
}

int		par_multiplication(char **str)
{
	int		n1;
	int		n2;
	char	op;

	n1 = par_parentheses(str);
	while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%')
	{
		n2 = par_parentheses(str);
		n1 = ft_do_op(n1, n2, op);
		op = (*str)[0];
		(*str)++;
	}
	return (n1);
}
