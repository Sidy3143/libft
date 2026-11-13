/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:52:04 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/13 12:17:09 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	my_char;

	i = 0;
	my_char = (unsigned char)c;
	while (s[i] && my_char != s[i])
		i++;
	if (my_char == s[i])
		return ((char *)(s + i));
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "abcde";

	printf("%s\n", strchr(str, 'c'));
}*/