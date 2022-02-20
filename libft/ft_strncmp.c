/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:36:15 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/17 11:50:59 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*k1;
	unsigned char	*k2;
	size_t			i;

	i = 0;
	k1 = (unsigned char *)s1;
	k2 = (unsigned char *)s2;
	while (k1[i] == k2[i] && (k1[i] != '\0' || k2[i] != '\0'))
		i++;
	if (n <= i)
		return (0);
	else
		return (k1[i] - k2[i]);
}
