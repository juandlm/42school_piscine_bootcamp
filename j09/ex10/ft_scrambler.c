/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_scrambler.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 13:47:32 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 13:48:04 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int a_tmp;
	int b_tmp;
	int c_tmp;

	b_tmp = *b;
	a_tmp = ***a;
	c_tmp = *******c;
	*b = ****d;
	***a = b_tmp;
	*******c = a_tmp;
}