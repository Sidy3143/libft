/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 18:29:42 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/03 20:02:23 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlcat(char *dest, char *src, size_t len)
{
    size_t dest_len;
    size_t src_len;
    size_t ;

    dest_len = 0;
    while (dest[dest_len] && dest_len < len)
        dest_len++;
    src_len = 0;
    while (dest[src_len])
        src_len++;

    if (len <= dest_len)
        return (len + src_len);

    
}

int main(void)
{
   
}