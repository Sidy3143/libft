/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:20:36 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/03 18:19:53 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t ft_strlcpy(char *dest, char *src, size_t n)
{
    size_t len;
    size_t i;

    len = 0;
    i = 0;
    while(src[i])
    {
        len++;
        i++;
    }
	if (n == 0)
        return (len);
    i = 0;
    while (i < n - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (len);
}

/*
int	main(void)
{
	char	*dest = malloc(10);
	char	*src = "sidy";

    int n = ft_strlcpy(dest, src, 5);
	printf("dest = %s\n", dest);
    printf("size = %d\n", n);
}*/
