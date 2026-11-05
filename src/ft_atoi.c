/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:58:10 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/05 16:53:29 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int resultat;

    i = 0;
    resultat = 0;
    sign = 1;
    while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n')
        i++;
    while (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            sign = -sign;
        i++;
    }
    while ('0' <= nptr[i] && nptr[i] <= '9')
    {
        resultat = (resultat * 10) + (nptr[i] - '0');
        i++;
    }
    return (sign * resultat);
}
/*
int main(void)
{
    char num[] = "  ---12345";
    printf("%d", ft_atoi(num));
}*/