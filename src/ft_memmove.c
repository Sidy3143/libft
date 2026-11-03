/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:33:56 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/03 15:24:17 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if (d < s)
    {
        while (n > 0)
        {
            *d = *s;
            d++;
            s++;
            n--;
        }   
    }
    else {
        while (n > 0)
        {
            n--;
            d[n] = s[n];
        }
    }
    return (dest);
}