/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:50:27 by egenc             #+#    #+#             */
/*   Updated: 2022/02/04 12:26:13 by egenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = '\0';
		i++;
	}
}
/*
void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] !=  'x')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	char str[] = "ebrar gencx";
    ft_bzero(str, 2);
	ft_putstr(str);
    //str'nin ilk 2 indisine null atar
    //putstr ile yazdiririz
	return (0);
}*/
