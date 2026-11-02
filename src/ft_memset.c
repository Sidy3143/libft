/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:00:13 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/02 18:19:55 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memset(void *pointer, int c, size_t n)
{
    unsigned char v;
    unsigned char *p;
    
    p = (unsigned char *)pointer;
    v = (unsigned char)c;

    while (n > 0)
    {
        *p = v;
        p++;
        n--;
    }
}