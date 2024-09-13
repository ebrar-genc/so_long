/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:52:43 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 14:19:56 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main()
{
	char	c = 'a';
	ft_putchar_fd(c, 1);
	//fd = üzerine yazılacak olan file descriptor
	//fd = 0, std input
	//fd = 1, std output
	//fd = 2, standart error
	//fd = 3 :: yeni bir dosya actiginda bu alana tahsis eder
}*/
