/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:36:44 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/06 20:43:13 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_istrim(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int k;
    int l;
    int s1_len;
    char    *trimstr;
    
    s1_len = 0;
    i = 0;
    while (s1[s1_len])
        s1_len++;
    j = s1_len - 1;
    while (ft_istrim(s1[i], set))
        i++;
    while (ft_istrim(s1[j], set))
        j--;
    trimstr = malloc(j - i + 1 + 1);
    if (!trimstr)
        return (NULL);
    k = i;
    l = 0;
    while (k <= j)
    {
        trimstr[l] = s1[k];
        k++;
        l++;
    }
    trimstr[l] = '\0';
    return (trimstr);
}

int main(void)
{
    char str[] = "***hello, sidy***";
    char set[] = "*-";
    char *trim = ft_strtrim(str, set);
    printf("str = %s\n", trim);
}