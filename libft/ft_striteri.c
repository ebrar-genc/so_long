/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:18:23 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 16:12:59 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			f(i, s + i);
			i++;
		}
	}
}
/*
void	f(unsigned int a, char *b)
{
	int	i;

	i = 0;
	while (b[i] != '\0')
	{
		b[i] = b[i] + 1;
		i++;
	}
}

int	main()
{
//	s stringinin her bir karakterine verilen fonku uygulama
//	mapi s stringini sadece fonkta bir seferlik degistirir.
//	cunku mapide dest'e atiyor
//	iteri fonkun yapisini kalici olarak tum programda  degistirir
	char s[] = "abc";
	ft_striteri(s, f);
	printf("%s", s);
//	cikti : bdf
}*/
