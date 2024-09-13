/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:24:53 by egenc             #+#    #+#             */
/*   Updated: 2022/10/15 15:57:23 by egenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*dst;
	size_t	i;

	dst = malloc(sizeof(char) * (ft_strlen((char *)s1) + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
int	main()
{
	const char	a[] = "ebrarGenc";

	printf("%s", ft_strdup(a));
	// Bellekte yer acar ve s1 stringini yerlestirir
}*/
