/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:57:54 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/12 20:04:11 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_length(int n)
{
    int length;
    
    length = 0;
    if (n <= 0)
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
    long    nb;
    char    *num;

    nb = n;
    length = ft_length(nb);
    num = malloc(sizeof(char) * (length + 1));
    if (!num)
        return (NULL);
    if (nb == 0)
        num[0] = '0';
    if (nb < 0)
    {
        num[0] = '-';
        nb = -nb;
    }
    num[length] = '\0';
    while (nb != 0)
    {
        length--;
        num[length] = (nb % 10 + '0');
        nb = nb / 10;
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