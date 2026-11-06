/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:36:44 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/06 19:10:26 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_istrim(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int s1_len;
    
    i = 0;
    while (ft_istrim(s1[i]))
    {
        s++;
        i++;
    }
    s1_len = 0;
    while (s1[s1_len])
        s1_len++;
    while (s_)
}