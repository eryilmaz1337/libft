/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:04:08 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/17 11:45:51 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *gelen, const void *in, size_t b)
{
	size_t	i;

	i = 0;
	if (!gelen && !in)
		return (NULL);
	while (i < b)
	{
		((unsigned char *)gelen)[i] = ((unsigned char *)in)[i];
		i++;
	}
	return (gelen);
}
