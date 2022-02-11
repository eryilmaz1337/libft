/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:35:20 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/09 16:56:33 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*k;
	size_t	i;
	int		kon;

	i = 0;
	kon = 0;
	k = (char *)s;
	while (i < n)
	{
		if (k[i] == c)
			return(&k[i]);
		i++;
	}
	return(0);
}