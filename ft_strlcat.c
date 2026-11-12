/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 18:29:42 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/12 17:26:32 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len;
    size_t src_len;
    size_t i;

    dest_len = 0;
    while (dest[dest_len] && dest_len < size)
        dest_len++;
    src_len = 0;
    while (dest[src_len])
        src_len++;
    if (size <= dest_len)
        return (size + src_len);
    while (src[i] && ((dest_len + i) < size - 1))
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest_len + src_len);
}
/*
int main(void)
{
   char buffer[20] = "hello";
   char str[6] = " sidy";
   printf("return size = %d\n", ft_strlcat(buffer, str, 3));
   printf("buffer = %s\n",buffer);
}*/