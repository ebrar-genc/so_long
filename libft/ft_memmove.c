/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:14:01 by egenc             #+#    #+#             */
/*   Updated: 2022/09/30 16:36:38 by egenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (!len || dst == src)
		return (dst);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char		dst[] = "ebrar";
	const char	src[] = "genc";
	printf("%s\n", ft_memmove(dst, src, 3));
	printf("%s", memmove(dst, src, 3));
//	src nin indexleri dst nin indexlerinin yerine gecer.
//	fazla olan dst indexleri aynen kalir
//	dst daha kucuk ise yine de eklenir
//	else durumu: dst bos ise son hali src nin kendisi olur
//	cikti: genar
}*/