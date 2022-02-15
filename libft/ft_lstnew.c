/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:56:07 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/15 17:56:09 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
t_list *ft_lstadd_back(void *content)
{
    t_list *my;

    my = malloc(sizeof(t_list));
    if(!my)
        return(0);
    my -> content = content;
    my -> next = NULL;
    return(my);
}