/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:49:38 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/06 14:45:38 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsizi)
{
	size_t	a;
	size_t	de;
	size_t	sr;

	de = ft_strlen(dest);
	sr = ft_strlen((char *)src);
	a = 0;
	if (dstsizi <= de)
		return (dstsizi + sr);
	while (src[a] != '\0' && de + a + 1 < dstsizi)
	{
		dest[de + a] = src[a];
		a++;
	}
	dest[de + a] = '\0';
	return (de + sr);
}
