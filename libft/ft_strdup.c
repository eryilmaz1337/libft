/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:37:55 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/17 11:49:56 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*p;
	int		i;
	int		e;

	e = 0;
	i = ft_strlen (src);
	p = (char *) malloc(i + 1);
	if (p == NULL)
		return (NULL);
	while (src[e] != '\0')
	{
		p[e] = src[e];
		e++;
	}
	p[i] = '\0';
	return (p);
}
