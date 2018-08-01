/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_combn.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/30 02:26:16 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/30 02:26:16 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

void	combn_util(int arr[10], int n, int index, int data[n], int i)
{
	int j;

	j = 0;
    if (index == n)
    {
        while (j < n)
		{
			ft_putnbr(data[j]);
			j++;
		}
		// ft_putchar(',');
		// ft_putchar(' '); //fix this so it doesn't print at the end of the output
        return ;
    }
    if (i > 9)
        return ;
    data[index] = arr[i];
    combn_util(arr, n, index + 1, data, i + 1);
    combn_util(arr, n, index, data, i + 1);
}

void	ft_print_combn(int n)
{
	int i;
	int index;
	int arr[10];
    int data[n];

	i = 0;
	index = 0;
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 4;
	arr[5] = 5;
	arr[6] = 6;
	arr[7] = 7;
	arr[8] = 8;
	arr[9] = 9;
    combn_util(arr, n, index, data, i);
}

int		main(void)
{
    ft_print_combn(1);
    return (0);
}
