/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:05:05 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/05 10:26:16 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    
    i = 0;
    while (s1[i] && (s1[i] == s2[i]) && (i < n - 1))
        i++;
    return (s1[i] - s2[i]);
}
/*
int main(void)
{
    char s1[] = "abcdef";
    char s2[] = "abc";

    printf("return : %d\n", ft_strncmp(s1, s2, 3));
}*/