/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:43:34 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/05 12:56:11 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*k;
	int		b;
	int		a;
	int		i;

	b = 0;
	a = 0;
	i = 0;
	k = (char *)s;
	while (k[i] != '\0')
		i++;
	while (a == 0)
	{
		if (k[i] == c)
			a = 1;
		i--;
	}
	return (&k[i + 1]);
}
