/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   displaying.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 16:41:03 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 20:12:48 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../includes/r2.h"

void	ft_display_coords(int x, int y)
{
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	ft_display_first(int rush, int x, int y)
{
	if (rush == 0 || rush == 1)
	{
		if (rush == 0)
			ft_putstr("[colle-00] [");
		else
			ft_putstr("[colle-01] [");
		ft_display_coords(x, y);
	}
	else
		ft_display_others(rush, x, y);
}

void	ft_display_others(int rush, int x, int y)
{
	if (rush == 2 || rush == 8 || rush == 7)
	{
		ft_putstr("[colle-02] [");
		ft_display_coords(x, y);
	}
	if (rush == 3 || rush == 8 || rush == 6)
	{
		if (rush == 8)
			ft_putstr(" || ");
		ft_putstr("[colle-03] [");
		ft_display_coords(x, y);
	}
	if (rush == 4 || rush == 8 || rush == 7 || rush == 6)
	{
		if (rush == 8 || rush == 7 || rush == 6)
			ft_putstr(" || ");
		ft_putstr("[colle-04] [");
		ft_display_coords(x, y);
	}
}
