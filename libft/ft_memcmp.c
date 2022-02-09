/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:14:13 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/07 17:03:36 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*k1;
	unsigned char	*k2;
	size_t			i;

	i = 0;
	k1 = (unsigned char *)s1;
	k2 = (unsigned char *)s2;
	while (k1[i] == k2[i] && n > i)
		i++;
	if (n <= i)
		return (0);
	else
		return (k1[i] - k2[i]);
}
