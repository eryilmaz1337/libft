/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:57:41 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/05 12:31:27 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *gelen, int a, size_t b)
{
	size_t	i;

	i = 0;
	while (i < b)
	{
		((unsigned char *)gelen)[i] = a;
		i++;
	}
	return (gelen);
}
