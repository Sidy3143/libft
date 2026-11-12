/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:00:13 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/12 18:24:31 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char v;
    unsigned char *p;
    
    p = (unsigned char *)s;
    v = (unsigned char)c;
    while (n > 0)
    {
        *p = v;
        p++;
        n--;
    }
    return (s);
}

/*
int main(void)
{
    char word[10];
    
    printf("Avant : %s\n", word);
    ft_memset(word, 'a', 9);
    //printf("Après : %s\n", word);
}*/