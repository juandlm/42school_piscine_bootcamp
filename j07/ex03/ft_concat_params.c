/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_concat_params.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/03 00:21:33 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/03 00:21:33 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\n';
	dest[i + 1] = '\0';
	return (dest);
}

char *ft_concat_params(int argc, char **argv)
{
	int i;
	char *params;

	if(!(params = malloc(sizeof(*params) * argc * 100)))
		return (params);
	i = 1;
	while (i < argc)
	{
		ft_strcat(params, argv[i]);
		i++;
	}
	return (params);
}
