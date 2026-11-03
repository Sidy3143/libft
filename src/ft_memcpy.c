/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:27:16 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/03 12:32:40 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memcpy(void *restrict dest, void *restrict src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    while (n)
    {
        *d = *s;
        d++;
        s++;
        n--;
    }
    return (dest);
}
/*
int main(void)
{
    char word[10] = "123456789";
    
    ft_memcpy(word + 3, word + 1, 9);
    printf("Après : %s\n", word);
}*/