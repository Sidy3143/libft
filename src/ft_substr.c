/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:04:11 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/06 17:54:50 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  i;
    size_t  s_len;

    if (!s)
        return (NULL);
    s_len = 0;
    while (s[s_len])
        s_len++;
    if (len > s_len - start)
        len = s_len - start;
    substr = malloc(len + 1);
    if (!substr)
        return (NULL);
    i = 0;
    while (i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}
/*
int main(void)
{
    char const s[] = "hello";
    printf("%s\n", ft_substr(s, 0, 9));
    
}*/