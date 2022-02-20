/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:03:55 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/17 13:00:30 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	uz(int b)
{
	int	i;

	i = 0;
	while (b > 0)
	{
		b = b / 10;
		i++;
	}
	return (i);
}

static	void	g(int b, char	*dizi, int i, int a)
{
	if (a == 1)
	{
		while (i >= 0)
		{
			dizi[i] = b % 10 + 48;
			b = b / 10;
			i--;
		}
	}
	else
	{
		while (i > 0)
		{
			dizi[i] = b % 10 + 48;
			b = b / 10;
			i--;
		}
	}
}

static	char	*eksi(int n)
{
	char	*dizi;
	int		i;
	int		b;

	if (n < 0)
	{
		b = n * -1;
		i = uz(b);
		dizi = malloc(i++ + 2);
		if (!dizi)
			return (0);
		dizi[0] = '-';
		b = n * -1;
		dizi[i--] = '\0';
		g (b, dizi, i, 0);
	}
	else
	{
		dizi = malloc(2);
		if (!dizi)
			return (0);
		dizi[1] = '\0';
		dizi[0] = '0';
	}
	return (dizi);
}

char	*ft_itoa(int n)
{
	char	*dizi;
	int		b;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	if (n > 0)
	{
		i = 0;
		b = n;
		i = uz(n);
		dizi = malloc(i);
		if (!dizi)
			return (0);
		b = n;
		dizi[i] = '\0';
		i--;
		g(b, dizi, i, 1);
		return (dizi);
	}
	else
		dizi = eksi(n);
	return (dizi);
}
