/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:26:11 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/13 12:14:52 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}
/*
int	main(void)
{
	int tab[4] = {1, 3, 5, 6};

	printf("Avant memset : %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3]);
	ft_bzero(tab, sizeof(tab));
	printf("Après memset : %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3]);
}*/