/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 17:19:52 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 19:38:43 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 1)
	{
		if (power < 0)
			return (0);
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
