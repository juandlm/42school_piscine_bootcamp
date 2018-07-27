/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   match.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 21:35:59 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 19:42:39 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	if (*s1 && *s2 == '*' && *s1 == *s2)
		return (match(s1 + 1, s2));
	else if (*s1 && *s2 && *s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else if (*s1 && *s2 && *s2 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	else if (!(*s1) && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (!(*s1) && !(*s2))
		return (1);
	return (0);
}
