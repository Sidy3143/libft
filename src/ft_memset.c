/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:00:13 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/03 12:34:37 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *pointer, int c, size_t n)
{
    unsigned char v;
    unsigned char *p;
    
    p = (unsigned char *)pointer;
    v = (unsigned char)c;
    while (n > 0)
    {
        *p = v;
        p++;
        n--;
    }
    return (pointer);
}

/*
int main(void)
{
    char word[10];
    
    printf("Avant : %s\n", word);
    ft_memset(word, 'a', 9);
    printf("Après : %s\n", word);
}*/