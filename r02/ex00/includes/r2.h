/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   r2.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 16:47:22 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 21:02:49 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef R2_H
# define R2_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <stdlib.h>

typedef struct		s_list
{
	char			data;
	struct s_list	*next;
}					t_list;

void				ft_display_coords(int x, int y);
void				ft_display_first(int rush, int x, int y);
void				ft_display_others(int rush, int x, int y);
t_list				*ft_create_elem(char c);
void				ft_list_push_back(t_list **begin_list, char c);
int					ft_list_at(t_list *begin_list, int nbr, int verif);
t_list				*ft_pipe_output(void);
int					ft_check_rush(t_list *list, int x, int y);
int					ft_compare_rush(t_list *list, int x, int y);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
int					ft_check_rush(t_list *list, int x, int y);
int					ft_compare_rush(t_list *list, int x, int y);
int					check_chars(t_list *list, int rush);
int					coord_y(t_list *list);
int					coord_x(t_list *list);

#endif
