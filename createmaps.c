/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createmaps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:14:54 by egenc             #+#    #+#             */
/*   Updated: 2022/10/15 19:16:42 by egenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	sizexy(t_list *main)
{
	int	i;

	i = 0;
	while (main->map[i] != '\0')
	{
		if (main->map[i] != '\n' && main->winy == 0)
			main->winx += 64;
		if (main->map[i] == '\n')
			main->winy += 64;
		i++;
	}
	main->winy += 64;
}

void	putimage2(t_list *main, int i)
{
	int	a;

	a = 65;
	if (main->map[i] == '0')
			main->x += 64;
	if (main->map[i] == 'P')
	{
		main->p = mlx_xpm_file_to_image(main->mlx, PLY, &a, &a);
		mlx_put_image_to_window(main->mlx, main->win, main->p, \
		main->x, main->y);
		main->x += 64;
	}
	if (main->map[i] == 'E')
	{
		mlx_put_image_to_window(main->mlx, main->win, main->exit, \
		main->x, main->y);
		main->x += 64;
	}
	if (main->map[i] == 'C')
	{
		mlx_put_image_to_window(main->mlx, main->win, main->coll, \
		main->x, main->y);
		main->x += 64;
	}
}

void	putimage(t_list *main)
{
	int	i;

	i = 0;
	main->x = 0;
	main->y = 0;
	while (main->map[i])
	{
		mlx_put_image_to_window(main->mlx, main->win, main->bg, \
		main->x, main->y);
		if (main->map[i] == '1')
		{
			mlx_put_image_to_window(main->mlx, main->win, main->wall, \
			main->x, main->y);
			main->x += 64;
		}
		if (main->map[i] == '\n')
		{
			main->x = 0;
			main->y += 64;
		}
		if (main->map[i] == 'E' || main->map[i] == 'P' || \
			main->map[i] == 'C' || main->map[i] == '0')
			putimage2(main, i);
		i++;
	}
}

void	setup(t_list *main)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	main->mlx = mlx_init();
	main->win = mlx_new_window(main->mlx, main->winx, main->winy, "so_long");
	main->wall = mlx_xpm_file_to_image(main->mlx, WALL, &a, &b);
	main->exit = mlx_xpm_file_to_image(main->mlx, EXIT, &a, &b);
	main->p = mlx_xpm_file_to_image(main->mlx, PLY, &a, &b);
	main->bg = mlx_xpm_file_to_image(main->mlx, BG, &a, &b);
	main->coll = mlx_xpm_file_to_image(main->mlx, COLL, &a, &b);
	putimage(main);
}

int	createmap(t_list *main, char *file)
{
	main->fd = open(file, O_RDONLY);
	if (main->fd < 0)
		return (0);
	main->map = ft_read(main->fd, main->map);
	main->map2 = ft_split(main->map, '\n');
	if (!(checkmap(main)))
	{
		free(main->map);
		return (0);
	}
	sizexy(main);
	setup(main);
	return (1);
}
