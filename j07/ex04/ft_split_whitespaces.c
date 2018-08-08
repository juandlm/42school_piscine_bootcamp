/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split_whitespaces.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 15:01:37 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/08 18:29:09 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdupn(char *src, int n, unsigned int len)
{
	char			*str;
	unsigned int	i;

	if (len == 0)
		return (0);
	if(!(str = malloc(sizeof(*src) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = src[n + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		ft_wordcount(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (!(s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		{
			j++;
			while (s[i] && !(s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
				i++;
		}
		else
			i++;
	}
	return (j);
}

char	**ft_fill(char **tab, char *str)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (str[i])
	{
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{
			len = 0;
			while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			{
				i++;
				len++;
			}
			tab[j++] = ft_strdupn(str, (i - len), len);
		}
		else
			i++;
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char **tab;

	if(!str || !(tab = malloc(sizeof(char *) * ft_wordcount(str) + 1)))
		return (NULL);
	tab = ft_fill(tab, str);
	return (tab);
}
