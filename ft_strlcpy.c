/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:20:36 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/13 12:19:14 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (src[i])
	{
		len++;
		i++;
	}
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	char	*dest = malloc(10);
	char	*src = "sidy";

	int n = ft_strlcpy(dest, src, 5);
	printf("dest = %s\n", dest);
	printf("size = %d\n", n);
}*/
