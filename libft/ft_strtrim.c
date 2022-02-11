/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:49:14 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/11 15:49:16 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *atama(char *a, char *b)
{
    char *gelen;
    size_t i;
    size_t h;

    h = b - a;
    i = 0;
    gelen = malloc(h + 1);
    while (h >i )
    {
        gelen[i] = *a;
        a++;
        i++;
    }
    gelen[i] = '\0';
    return (gelen);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t a;
    size_t i;
    size_t k;
    char *ana;
    char *son;
    char *gelen;

    a = strlen(set);
    k = strlen(s1);
    i = 0;
    ana = &((char *)s1)[i];
    while (s1[i]==set[i])
    {
        if(i + 1 == a)
            ana = &((char *)s1)[i + 1]; 
        i++;
    }
    while (s1[k-1] == set[a-1])
    {
        if(a == 1)
            son = &((char *)s1)[k - 1];
        a--;
        k--;
    }
    son = &((char *)s1)[k];
    gelen = atama(ana,son);
    return(gelen);
}

int main()
{
    char s1[] = "lorem ipsum dolor sit amet";
    char	set [] = "\t \nxzy";
    printf("%s",ft_strtrim(s1,set));
}