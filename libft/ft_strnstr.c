/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:39:55 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 16:42:32 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[h] == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len && haystack[h + n])
		{
			n++;
			if (needle[n] == '\0')
				return ((char *)&haystack[h]);
		}
		h++;
	}
	return (NULL);
}
/*
int main()
{
	printf("%s", ft_strnstr("ebrarGencAG", "r", -1));
//	cikti: rarGencAG
	printf("%s", ft_strnstr("ebrarGencAG", "rx", 13));
//	cikti: null
//	printf("%s", strnstr("ebrar", "r", 5));
//	needle'da verileni haystack'te arar
//	ilk buldugu yerden dondurur 
}*/
