/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_antidote.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 01:33:53 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 23:34:15 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if ((i <= j && i >= k) || (i >= j && i <= k))
		return (i);
	if ((j >= i && j <= k) || (j <= i && j >= i))
		return (j);
	if ((k >= j && k <= i) || (k >= i && k <= j))
		return (k);
	return (0);
}
