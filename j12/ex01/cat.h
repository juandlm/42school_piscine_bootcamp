/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   cat.h                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 00:02:53 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 19:31:38 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

# define BUF_SIZE 28696

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

#endif
