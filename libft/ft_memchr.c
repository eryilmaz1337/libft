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
	while (k[i] != '\0' && kon == 0)
	{
		if (k[i] == c)
			kon = 1;
		i++;
	}
	if (n < i)
		return (0);
	else if (kon == 1)
		return (&k[i - 1]);
	else
		return (NULL);
}
