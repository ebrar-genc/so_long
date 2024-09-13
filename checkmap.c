/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:17:48 by egenc             #+#    #+#             */
/*   Updated: 2022/10/15 19:29:57 by egenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	checkarray(t_list *main)
{
	int	i;
	int	ec;
	int	pc;

	i = 0;
	ec = 0;
	pc = 0;
	main->cc = 0;
	while (main->map[i])
	{
		if (main->map[i] == 'E')
			ec++;
		else if (main->map[i] == 'C')
			main->cc++;
		else if (main->map[i] == 'P')
		{
			main->pindex = i;
			pc++;
		}
		i++;
	}
	if (ec != 1 || main->cc == 0 || pc != 1)
		return (0);
	return (1);
}

void	checkarray2(t_list *main)
{
	static int	i = 0;
	static int	j = 0;

	while (main->map2[i])
	{
		if (j == main->xlen - 1)
		{
			i++;
			j = -1;
		}
		else if (main->map2[i][j] == 'P')
		{
			main->ply_y = i;
			main->ply_x = j;
		}
		else if (main->map2[i][j] == 'C')
			main->tmp_cc++;
		j++;
	}
}

static int	checksides(t_list *main)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (main->map[i])
	{
		if (main->map[i] == '\n')
		{
			if (x != main->xlen)
				return (0);
			if (main->map[i + 1] != '1' || main->map[i - 1] != '1')
				return (0);
			x = -1;
		}
		i++;
		x++;
	}
	if (x != main->xlen)
		return (0);
	return (1);
}

static int	checkwalls(t_list *main)
{
	int	i;

	i = 0;
	while (main->map[i] != '\n')
	{
		if (main->map[i] != '1')
			return (0);
		i++;
	}
	main->xlen = i;
	i = 0;
	while (main->map[i])
		i++;
	i--;
	while (main->map[i] != '\n')
	{
		if (main->map[i] != '1')
			return (0);
		i--;
	}
	return (1);
}

int	checkmap(t_list *main)
{
	int	i;

	i = 0;
	if (!checkarray(main))
		return (0);
	if (!checkwalls(main))
		return (0);
	if (!checksides(main))
		return (0);
	checkarray2(main);
	checkvalid(main, main->ply_x, main->ply_y);
	if (main->valid_exit == 0 || main->tmp_cc != 0)
		return (0);
	while (main->map[i])
	{
		if ((ft_strchr("ECP10", main->map[i]) && main->map[i] != '\n'))
			return (0);
		i++;
	}
	return (1);
}
