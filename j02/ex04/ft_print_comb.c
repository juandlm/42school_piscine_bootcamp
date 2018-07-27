/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 01:34:20 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 15:26:30 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putchar_tree(char nb1, char nb2, char nb3)
{
	ft_putchar(nb1);
	ft_putchar(nb2);
	ft_putchar(nb3);
	if (nb1 != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char nb1;
	char nb2;
	char nb3;

	nb1 = '0';
	while (nb1 <= '7')
	{
		nb2 = nb1 + 1;
		while (nb2 <= '8')
		{
			nb3 = nb2 + 1;
			while (nb3 <= '9')
			{
				ft_putchar_tree(nb1, nb2, nb3);
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}
