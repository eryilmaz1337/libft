/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:23:34 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/05 12:35:57 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*k;
	int		i;
	int		b;
	int		a;

	i = 0;
	b = 0;
	a = 0;
	k = (char *)s;
	while (a == 0)
	{
		if (k[b] == c)
			a = 1;
		b++;
	}
	return (&k[b - 1]);
}
