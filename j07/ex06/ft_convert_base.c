/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_convert_base.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/09 01:10:35 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/09 01:10:35 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_m_atoi(char *str)
{
	int	res;

	res = 0;
	if (*str == 32 || (*str > 8 && *str < 14))
		str++;
	while (*str)
	{
		if (*str > 47 && *str < 59)
			res = (res * 10) + (*str - '0');
		str++;
	}
	return (res);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*second_conversion(char *str, int base2, int digit, int n)
{
	char *res;
	int count;
	int r;
	int i;
	int j;

	res = malloc(sizeof(*res) * ft_strlen(str) + 1);
	count = 0;
	while (n != 0)
	{
		r = n % base2;
		digit = '0' + r;
		digit > '9' ? digit += 7 : digit;
		str[count] = digit;
		count++;
		n /= base2;
	}
	i = count;
	j = 0;
	while (--i >= 0)
	{
		res[j] = str[i];
		j++;
	}
	return (res);
}

char	*first_conversion(char *str, int base1, int base2) 
{
	char *res;
	int digit;
	int i;
	int n;
	int b;

	res = malloc(sizeof(*res) * ft_strlen(str) + 1);
	i = ft_strlen(str) - 1;
	n = 0;
	b = 1;
	while (i >= 0) 
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			digit = str[i] - '0' - 7;
		else if (str[i] >= 'a' && str[i] <= 'z')
			digit = str[i] - '0' - 39;
		else 
			digit = str[i] - '0';
		n = digit * b + n;
		b = b * base1;
		i--;
	}
	res = second_conversion(str, base2, digit, n);
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char *res;
	int base1;
	int base2;

	res = malloc(sizeof(*res) * ft_strlen(nbr) + 1);
	base1 = ft_m_atoi(base_from);
	base2 = ft_m_atoi(base_to);
	res = first_conversion(nbr, base1, base2);
	return (res);
}
