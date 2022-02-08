/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:10:12 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/05 12:01:42 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_bzero(void *giren, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		((unsigned char *) giren)[a] = '\0';
		a++;
	}
	return (giren);
}
