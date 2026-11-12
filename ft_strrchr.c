/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 19:33:01 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/12 16:19:26 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    int len;

    len = 0;
    while (s[len])
        len++;
    i = len - 1;
    while (i > 0 && s[i] != c)
        i--;
    if (i != 0)
        return ((char *)(s + i));
    return (NULL);
}
/*
int main(void)
{
    char str[] = "abcdecdgg";
    printf("%s\n", ft_strrchr(str, 'c'));
}*/