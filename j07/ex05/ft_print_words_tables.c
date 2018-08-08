/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_words_tables.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/08 18:27:13 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/08 18:27:13 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void ft_print_words_tables(char **tab)
{
    while(*tab)
    {
        ft_putstr(*tab);
		ft_putchar('\n');
        tab++;
    }
}
