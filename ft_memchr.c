/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:27:06 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/13 12:16:19 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)s;
	i = 0;
	while (i < n && (p[i] != (unsigned char)c))
		i++;
	if (i < n)
		return ((void *)(p + i));
	return (NULL);
}
/*
int	main(void)
{
	char s[] = "hello sidy";
	char *str = ft_memchr(s, 'l', 6);
	printf("string: %s", str);
}*/