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
		//printf("HERE: %d and %d\n", arr[i], i);
		// if (data[j] < 9)
		ft_putchar(',');
		ft_putchar(' ');
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
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int data[n];
	int i;
	int index;
	
	i = 0;
	index = 0;
    combn_util(arr, n, index, data, i);
}

int		main(void)
{
    ft_print_combn(3);
    return (0);
}
