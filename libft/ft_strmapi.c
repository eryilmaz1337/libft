/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:41:56 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/17 13:20:08 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dizi;
	size_t	uz;
	size_t	i;

	if (!s || !f)
		return (0);
	uz = ft_strlen(s);
	i = 0;
	dizi = malloc(uz + 1);
	if (!dizi)
		return (0);
	while (i < uz)
	{
		dizi[i] = (*f)(i, s[i]);
		i++;
	}
	dizi[i] = '\0';
	return (dizi);
}
