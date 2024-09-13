/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:41:45 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 14:13:03 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;

	source = (char *)src;
	dest = (char *)dst;
	if (!src && !dst)
		return (dst);
	while (n--)
		*dest++ = *source++;
	return (dst);
}
/*
int main()
{
	char dst[] = "ebrard";
	char src[] = "genc";

	printf("%s\n", ft_memcpy(dst, src, 2));
	//printf("%s", memcpy(dst, src, 2));
	//n kadar src'yi dst'nin ustune yazar.
	//cıktı:gerard
}*/
