/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:18:44 by egenc             #+#    #+#             */
/*   Updated: 2022/10/15 16:04:40 by egenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr(char *s, int c)
{
	int				i;
	unsigned char	p;

	i = 0;
	p = (char) c;
	if (p == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == p)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	// printf("%s", ft_strchr("ebrar", 'b'));
	printf("%s", strchr("ebrar", 'b'));
	// s stringini int c nin oldugu yerden dondurur
}*/
