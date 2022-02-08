/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:56:55 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/05 12:29:45 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *gelen, const void *in, size_t b)
{
	size_t	i;
	
	i = 0;
	while (i < b)
	{
		((unsigned char *)gelen)[i] = ((unsigned char *)in)[i];
		i++;
	}
	return (gelen);
}
