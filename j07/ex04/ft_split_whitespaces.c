/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split_whitespaces.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/03 00:55:30 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/03 00:55:30 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_word(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] >= 'a' && str[i] <= 'z' 
		|| str[i] >= 'A' && str[i] <= 'Z'))
	{
		if (str[i + 1] == ' ' || str[i - 1] == ' '
			|| str[i + 1] == '\t' || str[i - 1] == '\t'
			|| str[i + 1] == '\n' || str[i - 1] == '\n')
			return(1);
		i++;
	}
	return (0);
}

char **ft_split_whitespaces(char *str)
{
	char **tab;

	return (tab);
}

int main(void)
{
	char str[] = "this is \n a str\ting";
	ft_split_whitespaces(str);
	return (0);
}