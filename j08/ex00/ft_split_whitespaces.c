/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split_whitespaces.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 15:01:37 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 23:41:26 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_strdup_from_n(char const *src, int n, unsigned int len)
{
	char	*str;
	unsigned int	i;

	i = 0;
	if (len == 0)
		return (0);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == (NULL))
		return (NULL);
	while (i < len)
	{
		str[i] = src[n + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
static int		ft_wordcount(char const *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (!(s[i] == 32 || s[i] == '\t' || s[i] == '\n'))
		{
			j++;
			while (s[i] && !(s[i] == 32 || s[i] == '\t' || s[i] == '\n'))
				i++;
		}
		else
			i++;
	}
	return (j);
}

static char		**ft_fill(char **tab, char const *s)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (s[i])
	{
		if (!(s[i] == 32 || s[i] == '\t' || s[i] == '\n'))
		{
			len = 0;
			while (s[i] && !(s[i] == 32 || s[i] == '\t' || s[i] == '\n'))
			{
				i++;
				len++;
			}
			tab[j++] = ft_strdup_from_n(s, (i - len), len);
		}
		else
			i++;
	}
	tab[j] = 0;
	return (tab);
}

char			**ft_split_whitespaces(char const *str)
{
	char **tab;

	if (str == NULL)
		return (NULL);
	tab = malloc(sizeof(char *) * ft_wordcount(str) + 1);
	if (tab == NULL)
		return (NULL);
	tab = ft_fill(tab, str);
	return (tab);
}