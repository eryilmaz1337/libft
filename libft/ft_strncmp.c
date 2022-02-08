/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:36:15 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/05 12:46:06 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*k1;
	char	*k2;
	size_t	i;

	i = 0;
	k1 = (char *)s1;
	k2 = (char *)s2;
	while ((k1[i] == k2[i] && k1[i] != '\0' ) || k2[i] != '\0')
	{
		i++;
	}
	if (n <= i)
		return (0);
	else
		return (k1[i] - k2[i]);
}
