/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_Xbase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:15:35 by egenc             #+#    #+#             */
/*   Updated: 2022/10/06 19:15:35 by egenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	hexlen(unsigned long nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr != 0)
	{
		nbr = nbr / 16;
		i++;
	}
	return (i);
}

int	ft_putnbr_base(unsigned long nbr, char base)
{
	if (base == 'x')
	{
		if (nbr >= 16)
			ft_putnbr_base(nbr / 16, base);
		write(1, &"0123456789abcdef"[nbr % 16], 1);
	}
	else if (base == 'X')
	{
		if (nbr >= 16)
			ft_putnbr_base(nbr / 16, base);
		write(1, &"0123456789ABCDEF"[nbr % 16], 1);
	}
	return (hexlen(nbr));
}
