/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 14:23:01 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 17:46:30 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_putchar((nb1 / 10) + 48);
			ft_putchar((nb1 % 10) + 48);
			ft_putchar(' ');
			ft_putchar((nb2 / 10) + 48);
			ft_putchar((nb2 % 10) + 48);
			if (nb1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nb2++;
		}
		nb1++;
	}
}
