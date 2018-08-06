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

int is_whole_word(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] > 32 && str[i] < 127))
	{
		if (str[i + 1] == ' ' || str[i - 1] == ' ' ||
			str[i + 1] == '\t' || str[i - 1] == '\t' ||
			str[i + 1] == '\n' || str[i - 1] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *src)
{
	char			*str;
	unsigned int	i;

	if (!(str = malloc(*src)))
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char **ft_split_whitespaces(char *str)
{
	char **tab;
	int i;
	int j;

	tab = malloc(sizeof(**tab) * sizeof(str) * 1000);
	i = 0;
	j = 0;
	while (str[i])
	{
		tab[i][j] = str[i];
		j++;
		i++;
	}
	return (tab);
}

int main(void)
{
	char str[] = "this is \n a str\ting";
	ft_split_whitespaces(str);
	return (0);
}
