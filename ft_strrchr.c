/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 19:33:01 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/13 12:19:05 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				len;
	unsigned char	my_char;

	len = 0;
	my_char = (unsigned char)c;
	while (s[len])
		len++;
	i = len;
	while (i >= 0 && (unsigned char)s[i] != my_char)
		i--;
	if (i >= 0)
		return ((char *)(s + i));
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "abcdecdgg";
	printf("%s\n", ft_strrchr(str, 'c'));
}*/