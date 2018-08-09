/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tail.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 00:02:53 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/09 01:12:31 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef TAIL_H
# define TAIL_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

# define BUF_SIZE 28696

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

#endif
