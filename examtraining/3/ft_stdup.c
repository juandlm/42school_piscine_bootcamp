/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_stdup.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 16:39:17 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 16:44:07 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strdup(char *src)
{
	char *str;
	int i;

	i = 0;
	str = malloc(sizeof(*res) * 100)
	if (!src || !str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;		
	}
	str[i] = '\0';
	return(str);
}
