/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:49:46 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/17 13:17:08 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char *s2)
{
	size_t	a;
	size_t	b;
	size_t	t;
	size_t	i;
	char	*g;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	t = a + b;
	i = 0;
	g = malloc(t + 1);
	if (!g)
		return (NULL);
	while (a > i)
	{
		g[i] = s1[i];
		i++;
	}
	a = 0;
	while (b > a)
		g[i++] = s2[a++];
	g[i] = '\0';
	return (g);
}
