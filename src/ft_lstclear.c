/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:46:46 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/09 18:26:45 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *current;
    t_list  *next;

    if (!lst || !del)
        return ;
    if (!*lst)
        return ;
    current = *lst;
    while (current)
    {
        next = current -> next;
        del(current->content);
        free(current);
        current = next;
    }
    *lst = NULL;
}