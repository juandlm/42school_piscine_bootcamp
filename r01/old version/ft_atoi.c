/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 14:37:19 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 10:51:07 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi_cst(char *str)
{
	int	i;
	int	neg;
	int	n;

	i = 0;
	neg = 1;
	n = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\r')
			|| (str[i] == '\v') || (str[i] == ' ') || (str[i] == '\f'))
		i = i + 1;
	if (str[i] == '-')
		neg = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i = i + 1;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		n = n * 10;
		n = n + str[i] - '0';
		i = i + 1;
	}
	return (neg * n);
}