/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 15:13:11 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 18:49:54 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*pstr;
	unsigned int	i;

	i = 0;
	pstr = (char*)malloc(*src);
	while (src[i])
	{
		pstr[i] = src[i];
		i++;
	}
	pstr[i] = src[i];
	return (pstr);
}
