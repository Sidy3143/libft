/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:46:46 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/09 17:51:56 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *first;
    if (!lst || !del)
        return ;
    if (!*lst)
        return ;
    while ()
}