/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:07:52 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/06 14:01:46 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void *calloc(size_t n, size_t size)
{
    size_t  total_size;
    size_t  i;
    unsigned char *p;

    if (n > 0 && (size > SIZE_MAX / n))
    {
        return (NULL);
    }
    total_size = n * size;
    if (total_size == 0)
        total_size = 1;
    p = malloc(total_size);
    i = 0;
    while (i < total_size)
    {
        p[i] = 0;
        i++;
    }
    return (p);
}