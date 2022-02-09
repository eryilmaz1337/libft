/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryilmaz <eryilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:42:50 by eryilmaz          #+#    #+#             */
/*   Updated: 2022/02/05 11:42:52 by eryilmaz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
void *ft_bzero(void *giren,size_t n);
int	ft_isalnum(int i);
int	ft_isalpha(int str);
int	ft_isascii(int i);
int	ft_isdigit(int str);
int	ft_isprint(char i);
void *ft_memchr(const void *s, int c,size_t n);
int ft_memcmp(const char *s1 , const char *s2 , size_t n);
void *ft_memcpy(void *gelen, const void *in, size_t b);
void *ft_memmove(void *gelen, const void *in, size_t b);
void *ft_memset(void *gelen,int a, size_t b);
char *ft_strchr(const char *s , int c);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *str);
int ft_strncmp(const char *s1 , const char *s2 , size_t n);
char * ft_strnstr(const char *haystack, const char *needle,size_t len);
char *ft_strrchr(const char *s , int c);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_atoi(const char *str);
void *ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *src);