/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:51:08 by egenc             #+#    #+#             */
/*   Updated: 2022/10/15 16:07:20 by egenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s1, char *set)
{
	size_t	len;
	char	*newstr;
	int		j;
	size_t	i;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (0);
	len = ft_strlen((char *)s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (len > i && ft_strchr(set, s1[len - 1]))
		len--;
	newstr = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!newstr)
		return (0);
	while (i < len)
		newstr[j++] = s1[i++];
	newstr[j] = '\0';
	return (newstr);
}
/*
int	main()
{
	char	*s1 = "ebrarGENCeeb";
	char	*set = "eb";
//	s1in basindan ve sonundan seti tarayacak ve ortayı dondurecek
	printf("%s", ft_strtrim(s1, set));
//	cikti: rarGENC
}*/
