/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:15:04 by egenc             #+#    #+#             */
/*   Updated: 2022/10/15 19:15:00 by egenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx/mlx.h"
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"

# define WALL "./images/wall.xpm"
# define EXIT "./images/exit.xpm"
# define PLY "./images/p.xpm"
# define COLL "./images/coll.xpm"
# define BG "./images/bg.xpm"

typedef struct s_list
{
	void	*mlx;
	void	*win;
	void	*p;
	void	*wall;
	void	*coll;
	void	*bg;
	void	*exit;
	char	*map;
	char	**map2;
	int		winx;
	int		winy;
	int		fd;
	int		index;
	int		xlen;
	int		valid_exit;
	int		cc;
	int		tmp_cc;
	int		x;
	int		y;
	int		ply_x;
	int		ply_y;
	int		pindex;
	int		movecount;
}			t_list;

int		createmap(t_list *main, char *map);
int		checkmap(t_list *main);
void	checkvalid(t_list *main, int x, int y);
char	*ft_read(int fd, char *left_str);
size_t	ft_strlen(char *s);
void	setup(t_list *stp);
void	putimage(t_list *put);
void	moveup(t_list *main);
void	movedown(t_list *main);
void	moveright(t_list *main);
void	moveleft(t_list *main);
int		checkarray(t_list *main);
void	ft_exit(t_list *main);
int		ft_printf(const char *s, ...);
#endif
