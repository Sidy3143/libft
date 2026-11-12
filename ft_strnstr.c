/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:59:43 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/12 18:25:49 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t n)
{
    size_t  i;
    size_t  j;

    if (little[0] == '\0')
        return ((char *)big);
    i = 0;
    while ((i < n) && big[i])
    {
        j = 0;
        if (little[j] == big[i])
        {
            while(little[j] && (i+j < n) && (little[j] == big[i + j]))
                j++;
            if (!little[j])
                return ((char *)big + i);
        }
        i++;
    }
    return (NULL);
}
/*
int main(void)
{
    char texte[] = "hello, every";
    char cherche[] = "every";
    char *resultat;

    resultat = ft_strnstr(texte, cherche, 12);
    if (resultat) {
        printf("Trouvé ! Reste de la chaîne : %s\n", resultat);
    } else {
        printf("Non trouvé.\n");
    }
}*/