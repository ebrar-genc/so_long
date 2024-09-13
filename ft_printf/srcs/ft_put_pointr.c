/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:15:45 by egenc             #+#    #+#             */
/*   Updated: 2022/10/06 19:15:45 by egenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_put_pointr(unsigned long long ptr)
{
	int		i;
	char	s[16];
	int		count;

	i = 0;
	count = 0;
	if (ptr == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	write(1, "0x", 2);
	while (ptr)
	{
		s[i++] = "0123456789abcdef"[ptr % 16];
		ptr /= 16;
	}
	while (i--)
		count += write(1, &s[i], 1);
	return (count + 2);
}
