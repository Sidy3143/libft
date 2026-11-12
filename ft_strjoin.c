/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:53:25 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/12 16:18:22 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  s1_len;
    size_t  s2_len;
    size_t  i;
    char    *str;

    if (!s1 || !s2)
        return (NULL);
    s1_len = 0;
    s2_len = 0;
    while (s1[s1_len])
        s1_len++;
    while (s2[s2_len])
        s2_len++;
    str = malloc(s1_len + s2_len + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (i < s1_len)
    {
        str[i] = s1[i];
        i++;
    }
    i = 0;
    while (i < s2_len)
    {
        str[i + s1_len] = s2[i];
        i++;
    }
    str[i + s1_len] = '\0';
    return (str);
}
/*
int main(void)
{
    char    str[] = "hello";
    char    str2[] = " sidy";
    printf("%s\n", ft_strjoin(str, str2));
}*/