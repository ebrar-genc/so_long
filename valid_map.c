/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:36:18 by egenc             #+#    #+#             */
/*   Updated: 2022/10/15 18:49:36 by egenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	checkvalid(t_list *main, int x, int y)
{
	char	*p;

	p = &main->map2[y][x];
	if (*p == 'E')
		main->valid_exit = 1;
	if (*p != '1' && *p != 'E')
	{
		if (*p == 'C')
			main->tmp_cc--;
		*p = '.';
		if (main->map2[y][x + 1] != '1' && main->map2[y][x + 1] != '.')
			checkvalid(main, x + 1, y);
		if (main->map2[y][x - 1] != '1' && main->map2[y][x - 1] != '.')
			checkvalid(main, x - 1, y);
		if (main->map2[y + 1][x] != '1' && main->map2[y + 1][x] != '.')
			checkvalid(main, x, y + 1);
		if (main->map2[y - 1][x] != '1' && main->map2[y - 1][x] != '.')
			checkvalid(main, x, y - 1);
	}
}
