/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:21:45 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 15:38:17 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	i = 0;
	while (src[i] && dstlen + 1 < dstsize)
	{
		dst[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dst[dstlen] = 0;
	return (ft_strlen(dst) + ft_strlen((char *)&src[i]));
}
/*
int main()
{
	char dst[] = "co";
	char src[] = "AAA";

	printf("%lu, %s\n", ft_strlcat(dst, src, 2), dst);
	//printf("%lu, %s\n", strlcat(dst, src, 7), dst);
	// cikti: "5, co" olur
}*/
