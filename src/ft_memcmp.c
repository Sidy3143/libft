/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:49:59 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/05 14:06:17 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1;
    const unsigned char *p2;
    size_t  i;

    if (n == 0)
        return (0);

    p1 = (const unsigned char *)s1;
    p2 = (const unsigned char *)s2;
    i = 0;
    while (p1[i] && (p1[i] == p2[i]) && (i < n - 1))
        i++;
    return (p1[i] - p2[i]);
}
/*
int main(void)
{
    const char    s1[] = "hello sidy";
    const char    s2[] = "hello didy";
    printf("%d\n", ft_memcmp(s1, s2, 10));
}*/