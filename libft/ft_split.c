/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:34:08 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/12 15:34:10 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char **olusan(void *adresler, size_t a, char *tum,char c)
{
    char **giden;
    size_t i;
    size_t k;
    k = 0;
    i = 0;
    gelen = malloc(a);
    while (k<=a)
    {
        gelen[k][] = malloc(&tum)
        while (adresler[i] != &tum[i])
        {
            gelen[k][i]=tum[i];
            i++;
        }
        k++;
        i++;
    }
    return(gelen)
}
char **ft_split(char const *s, char c)
{
    size_t a;
    size_t i;
    size_t b;
    char *genel_dizi;
    void *adresler;
    
    a = ft_strlen(s);
    i = 0;
    b = 0;
    genel_dizi = (char *)s;
    while (i<a)
    {   
        if(genel_dizi[i]==c)
        {
            adresler[b] = &genel_dizi[i];
            b++;
        }
        i++;
    }
    olusan(adresler, b + 1, genel_dizi,c)

}
