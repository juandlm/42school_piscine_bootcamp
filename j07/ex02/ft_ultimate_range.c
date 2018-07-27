/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 22:40:42 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 23:32:18 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *arr;
	int i;

	i = 0;
	if (min >= max)
		arr = NULL;
	arr = (int*)malloc(sizeof(int) * (max - min));
	while (min <= max - 1)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (i);
}
