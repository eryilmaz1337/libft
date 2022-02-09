/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:56:55 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/07 14:20:37 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *gelen, const void *in, size_t b)
{
	if (!gelen && !in)
		return (NULL);
	if (gelen < in)
		ft_memcpy (gelen, in, b);
	else if (gelen > in)
	{
		while (b--)
			*((unsigned char *)(gelen + b)) = *((unsigned char *)(in + b));
	}
	return (gelen);
}
