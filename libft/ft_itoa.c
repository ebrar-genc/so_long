/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:06:14 by egenc             #+#    #+#             */
/*   Updated: 2022/01/20 17:35:31 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	nbrlen(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}

static int	ft_div(int len)
{
	int	i;

	i = 1;
	if (len == 1)
		return (i);
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			len;
	int			len2;
	int			i;
	long int	n2;

	n2 = n;
	len = nbrlen(n2);
	len2 = len;
	res = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!res)
		return (0);
	if (n2 < 0)
	{
		res[i] = '-';
		i++;
		n2 *= -1;
		len2--;
	}
	while (i < len)
		res[i++] = (((n2 / ft_div(len2--)) % 10) + 48);
	res[i] = '\0';
	return (res);
}
/*
int	main()
{
	int n = -1234;
	//int n degerini char degere donusturur
	printf("%s", ft_itoa(n));
}*/
