/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:57:54 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/12 16:16:24 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int ft_length(int n)
{
    int length;
    
    length = 0;
    if (n < 0)
    {
        n = -n;
        length++;
    }
    while (n != 0)
    {
        length++;
        n = n / 10;
    }
    return (length);
}

char *ft_itoa(int n)
{
    int length;
    int sign;
    char    *num;

    length = ft_length(n);
    num = malloc(length + 1);
    if (!num)
        return (NULL);
    if (n < 0)
    {
        num[0] = '-';
        n = -n;
    }
    num[length] = '\0';
    while (length > 1)
    {
        length--;
        num[length] = (n % 10 + '0');
        n = n / 10;
    }
    return (num);
}
/*
int main(void)
{
    int n = -42;
    char *num = ft_itoa(n);
    printf("num : %s\n", num);
}*/