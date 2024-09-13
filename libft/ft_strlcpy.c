/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 20:00:00 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 15:42:58 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;

	srcsize = ft_strlen((char *)src);
	if (!dst || !src)
		return (0);
	if (dstsize != 0)
	{
		while (*src != '\0' && --dstsize)
		{
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return (srcsize);
}
/*
int main()
{
	char dst[] = "ebrarXXX";
	char src[] = "genc";

	printf("%lu, %s", ft_strlcpy(dst, src, 8), dst);
	// cikti: "4, genc" olur
	// src'yi dst'ye kopyalar. Sonuna null atar
	//printf("%lu", strlcpy(dst, src, 6));
	//pintf("%s", dst);
}*/
