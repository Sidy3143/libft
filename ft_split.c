/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:08:45 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/12 18:25:00 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_issep(char el, char c)
{
    return (el == c);
}

int word_len(char const *s, char c)
{
    int i;
    int word_len;
    
    i = 0;
    word_len = 0;
    while (s[i])
    {
        if (!ft_issep(s[i], c))
        {
            word_len++;
            while (s[i] && !ft_issep(s[i], c))
                i++;
        }
        else
            i++;
    }
    return (word_len);
}

char    **filltab(char **split, char const *s, int start, int end, int index)
{
    int i;
    int j;
    int len;

    len = end - start;
    split[index] = malloc(len + 1);
    i = start;
    j = 0;
    while(j < len)
    {
        split[index][j] = s[i];
        i++;
        j++;
    }
    split[index][j] = '\0';
    return (split);
}

char **ft_split(char const *s, char c)
{
    int i;
    int j;
    int start;
    char    **split;
    
    split = malloc(sizeof(char *) * (word_len(s, c) + 1));
    i = 0;
    j = 0;
    while (s[i])
    {
        if (!ft_issep(s[i], c))
        {
            start = i;
            while (s[i] && !ft_issep(s[i], c))
                i++;
            split = filltab(split, s, start, i, j);
            j++;
        }
        else
            i++;
    }
    split[j] = NULL;
    return (split);
}
/*
int main(void)
{
    char str[] = "sidy*is*here*haha**hihi**";
    char c = '*';
    printf("n_words: %zu\n", word_len(str, c));
    char **split = ft_split(str, c);
    int i;
    i = 0;
    while (split[i])
    {
        printf("word: %s\n", split[i]);
        i++;
    }
    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
}*/