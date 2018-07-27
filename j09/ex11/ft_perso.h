/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_perso.h                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 13:48:40 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 14:42:50 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>
# define SAVE_THE_WORLD "Kill all mosquitoes"

typedef struct		s_perso
{
	char	*name;
	double	life;
	int		age;
	char	*profession;
}					t_perso;
#endif
