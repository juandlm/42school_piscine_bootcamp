/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tools.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 15:53:43 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/09 22:09:05 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*ft_strncat(char *dst, char *src, unsigned int n)
{
	char	*buf;
	char	*dst_;
	char	*str;

	if (!dst)
		return (ft_strncat("", src, n));
	if (!src)
		return (ft_strncat(src, dst, n));
	dst_ = dst;
	while (*dst_++)
		;
	if (!(str = (char*)malloc(((dst_ - dst) + n + 1) * sizeof(char))))
		return (str);
	buf = str;
	while (*dst)
		*buf++ = *dst++;
	while (n--)
		*buf++ = *src++;
	*buf = '\0';
	return (str);
}

int		ft_m_atoi(char *str)
{
	unsigned short	res;

	res = 0;
	if (*str == 32 || (*str > 8 && *str < 14))
		str++;
	while (*str)
	{
		if (*str > 47 && *str < 59)
			res = (res * 10) + (unsigned short)(*str - '0');
		str++;
	}
	return (res);
}

int		ft_min(int a, int b, int c)
{
	if (a < b)
		return (a < c) ? a : c;
	else
		return (b < c) ? b : c;
}
