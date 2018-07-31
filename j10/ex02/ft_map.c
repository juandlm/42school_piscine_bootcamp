/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 20:27:18 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/30 15:34:38 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *ntab;

	i = 0;
	ntab = (int*)malloc(sizeof(*ntab) * length);
	while (i < length)
	{
		ntab[i] = f(*tab);
		tab++;
		i++;
	}
	return (ntab);
}
