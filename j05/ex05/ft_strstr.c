/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 19:22:51 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 19:24:38 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *result;
	char *search;

	while (*str)
	{
		result = str;
		search = to_find;
		while (*str && *search && *str == *search)
		{
			str++;
			search++;
		}
		if (!*search)
			return (result);
		str = result + 1;
	}
	return (0);
}
