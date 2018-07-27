/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_collatz_conjecture.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 02:16:36 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 03:08:38 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (!(base % 2))
		base = base / 2;
	else
		base = (base * 3) + 1;
	return (ft_collatz_conjecture(base) + 1);
}
