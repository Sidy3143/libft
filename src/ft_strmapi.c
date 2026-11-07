/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 19:25:10 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/07 19:50:23 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char const *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len;
    unsigned int i;
    char    *str;

    len = ft_strlen(s);
    str = malloc(len + 1);
    i = 0;
    while (i < len)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
/*
char    rotindex(unsigned int i, char c)
{
    return (c + i);
}

int main(void)
{
    char const str[] = "sid";
    char *out;
    out = ft_strmapi(str, rotindex);
    printf("str out: %s", out);
}*/