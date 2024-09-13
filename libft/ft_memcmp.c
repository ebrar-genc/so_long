/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:26:12 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 14:11:01 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	const unsigned char	*f1;
	const unsigned char	*f2;
	int					i;

	f1 = s1;
	f2 = s2;
	i = 0;
	while (i < n)
	{
		if (f1[i] != f2[i])
			return (f1[i] - f2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_memcmp("ebrar", "d", 1));
	printf("%d", memcmp("ebrar", "d", 1));
	//int n: s2'nin uzunlugu olur
	//n kadar dongu doner, farkli indexte farki dondurur
}*/
