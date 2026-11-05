/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:52:04 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/04 19:20:41 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] && c != s[i])
        i++;
    if (s[i])
        return ((char *)(s+ i));
    return (NULL);
}

int main(void)
{
    char str[] = "abcde";

    printf("%s\n", strchr(str, 'c'));
}