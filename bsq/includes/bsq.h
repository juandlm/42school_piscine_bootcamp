/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   bsq.h                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/25 19:33:07 by jde-la-m     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 23:28:49 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# define BUFF_SIZE 50000

# include <stdlib.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>

typedef struct		s_coord
{
	int		row;
	int		col;
	int		max;
}					t_coord;

typedef struct		s_grid
{
	char	*str;
	char	*begin;
	int		row;
	int		col;
	int		size;
}					t_grid;

typedef struct		s_map
{
	int		dimension;
	char	empty;
	char	obstacle;
	char	solver;
}					t_map;

char				*ft_strncat(char *dst, char *src, unsigned int n);
int					ft_m_atoi(char *str);
int					ft_min(int a, int b, int c);
int					ft_max(int *tab, unsigned int len);
int					ft_file_size(char *filename);
void				bsq_solver(int fd);
void				bsq_map_error(void);
t_grid				bsq_read_grid(int fd, int bfs);
t_map				bsq_info(t_grid grid);
void				bsq_fill_tab(int **tab, t_coord pos, t_grid grid);
void				bsq_fill_tab_once(int **tab, t_grid grid);
void				bsq_display(int **tab, t_grid grid, t_map map);
t_coord				bsq_algorithm(int **tab, t_grid grid);
int					bsq_check_map(t_grid grid, t_map map);
int					**bsq_ctoi(t_grid grid, t_map map);

#endif
