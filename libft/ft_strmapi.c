/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:03:32 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 16:11:36 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	i;
	size_t	len;

	if (s)
	{
		i = 0;
		len = ft_strlen((char *)s);
		dest = (char *)malloc(sizeof(char) * (len + 1));
		if (!dest)
			return (NULL);
		while (i < len)
		{
			dest[i] = f(i, s[i]);
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (0);
}
/*
char	f(unsigned int a, char b)
{
	unsigned int	alpha;
	alpha = a;
	return (b - 32);
}

int	main()
{
	//s stringinin her bir karakterine verilen fonksiyonu uygulama
	//mapi s stringini sadece fonkta bir seferlik degistirir.
	//cunku mapide dest'e atiyor
	//iteri fonkun yapisini kalici olarak tum programda  degistirir
	char *s1 = "ebrarGenc";
	printf("%s", ft_strmapi(s1, f));
	printf("%s", s1);
}*/
