/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:39:59 by egenc             #+#    #+#             */
/*   Updated: 2022/10/02 14:55:02 by egenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;
	size_t	len_src;

	dest = (char *) malloc(sizeof(char) * len + 1);
	if (!dest || s == NULL)
		return (NULL);
	len_src = ft_strlen((char *)s);
	i = 0;
	while (start < len_src && len > 0)
	{
		dest[i++] = s[start++];
		len--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	printf("%s", ft_substr("ebrar", 2, 4));
//	cikti: rar
//	start = baslatmak istedigimiz indis degeri
//	len = s stringi icin yazmak istedigin kadar yer
}*/
