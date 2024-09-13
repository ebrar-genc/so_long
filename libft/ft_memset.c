/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:40:58 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 14:17:41 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)str)[i] = c;
		i++;
	}
	return ((char *)str);
}
/*
int main()
{
	char str[] = {"ebrargenc"};
	int c = 'x';
	int i = 0;

	ft_memset(str, c, 3);
	printf("\n%s", memset(str, c, 3));
	// len kadar int c degerini str üzerine yazar
	// cikti: xxxargenc
}*/
