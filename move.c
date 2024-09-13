/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:18:22 by egenc             #+#    #+#             */
/*   Updated: 2022/10/15 19:11:13 by egenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	moveup(t_list *main)
{
	checkarray(main);
	if (main->map[main->pindex - main->xlen - 1] == '0')
	{
		main->map[main->pindex - main->xlen - 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
		ft_printf("%sYour moved %d times\n", "\x1B[34m", main->movecount);
	}
	if (main->map[main->pindex - main->xlen - 1] == 'C')
	{
		main->map[main->pindex - main->xlen - 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
		ft_printf("%sYour moved %d times\n", "\x1B[34m", main->movecount);
	}
	if (main->map[main->pindex - main->xlen - 1] == 'E' && main->cc == 0)
	{
		ft_printf("%sYou WON!\nTotal %d moves!\n", "\x1b[1m", ++main->movecount);
		ft_exit(main);
	}
}

void	movedown(t_list *main)
{
	checkarray(main);
	if (main->map[main->pindex + main->xlen + 1] != '1' \
		&& main->map[main->pindex + main->xlen + 1] == '0')
	{
		main->map[main->pindex + main->xlen + 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
		ft_printf("%sYour moved %d times\n", "\x1b[33m", main->movecount);
	}
	if (main->map[main->pindex + main->xlen + 1] == 'C')
	{
		main->map[main->pindex + main->xlen + 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
		ft_printf("%sYour moved %d times\n", "\x1b[33m", main->movecount);
	}
	if (main->map[main->pindex + main->xlen + 1] == 'E' && main->cc == 0)
	{
		ft_printf("%sYou WON!\nTotal %d moves!\n", "\x1b[1m", ++main->movecount);
		ft_exit(main);
	}
}

void	moveright(t_list *main)
{
	checkarray(main);
	if (main->map[main->pindex + 1] != '1' \
		&& main->map[main->pindex + 1] == '0')
	{
		main->map[main->pindex + 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
		ft_printf("%sYour moved %d times\n", "\x1b[30m", main->movecount);
	}
	if (main->map[main->pindex + 1] == 'C')
	{
		main->map[main->pindex + 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex + 1] == 'E' && main->cc == 0)
	{
		ft_printf("%sYou WON!\nTotal %d moves!\n", "\x1b[1m", ++main->movecount);
		ft_exit(main);
	}
}

void	moveleft(t_list *main)
{
	checkarray(main);
	if (main->map[main->pindex - 1] != '1' \
		&& main->map[main->pindex - 1] == '0')
	{
		main->map[main->pindex - 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
		ft_printf("%sYour moved %d times\n", "\x1b[37m", main->movecount);
	}
	if (main->map[main->pindex - 1] == 'C')
	{
		main->map[main->pindex - 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
		ft_printf("%sYour moved %d times\n", "\x1b[37m", main->movecount);
	}
	if (main->map[main->pindex - 1] == 'E' && main->cc == 0)
	{
		ft_printf("%sYou WON!\nTotal %d moves!\n", "\x1b[1m", ++main->movecount);
		ft_exit(main);
	}
}
