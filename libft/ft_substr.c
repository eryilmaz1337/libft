/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:34:00 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/09 17:34:02 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char *dizi;
	size_t 	i;

	if(!s)
		return (NULL);
	i = 0;
	dizi = malloc((sizeof(char) * len) + 1);
	if(start+len > ft_strlen(s))
		return (dizi);
	if(!dizi)
		return (0);
	while (i < len)
	{
		dizi[i]=s[start];
		i++;
		start++;
	}
	dizi[i] = '\0';
	return (dizi);

}
