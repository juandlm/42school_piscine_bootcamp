/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_max.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 16:41:28 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 16:45:19 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_max(int *tab, int lenght)
{
	int max;
	int i;

	i = 0;
	max = 0;
	while (i < length)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}