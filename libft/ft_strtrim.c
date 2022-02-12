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
char *sondonus(char *bas, char *son)
{
    char *ol;
    int size;
    int i;

    i = 0;
    size = son - bas;
    ol = malloc(size + 2);
    if (!ol)
        return (NULL);
    while (i <= size)
    {
        ol[i] = *bas;
        bas++;
        i++;
    }
    ol[i] = '\0';
    return (ol);
    
}
int kontrol(char c, char *g)
{
    
    while (*g != '\0')
    {
        if(c == *g)
            return (1);
        g++;
    }
    return (0);
    

}
char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    size_t a;
    char *bas;
    char *son;
    char *k1;
    char *k2;
    char *gelen;

    if (!s1 || !set)
        return(NULL);
    i = 0;
    a = ft_strlen(s1) - 1 ;
    k1 = (char *)s1;
    k2 = (char *)set;
    while (kontrol(k1[i],k2))
        i++;
    bas = &k1[i];
    while (kontrol(k1[a],k2))
        a--;
    son = &k1[a];
    if(son - bas < 0)
        return(ft_strdup(""));
    gelen = sondonus(bas,son);
    return(gelen);
}