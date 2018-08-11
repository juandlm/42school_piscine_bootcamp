/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 16:11:47 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/11 17:52:54 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!*str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		j;
	int		i;
	char	tmp[ft_strlen(str)];

	i = 0;
	j = 0;
	if (!*str)
		return (str);
	while (str[i])
	{
		tmp[i] = str[i];
		i++;
	}
	j = i - 1;
	i = 0;
	while (i < j + 1)
	{
		str[i] = tmp[j - i];
		i++;
	}
	return (str);
}
