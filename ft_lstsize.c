/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:08:17 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/12 16:17:05 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

unsigned int ft_lstsize(t_list *lst)
{
    unsigned    int len;

    len = 0;
    while (lst)
    {
        len++;
        lst = lst -> next;
    }
    return (len);
}