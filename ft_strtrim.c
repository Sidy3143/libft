/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:36:44 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/13 12:57:27 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_istrim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*trimstr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_istrim(s1[i], set))
		i++;
	while ((j > i) && ft_istrim(s1[j], set))
		j--;
	trimstr = malloc(j - i + 1 + 1);
	if (!trimstr)
		return (NULL);
	k = 0;
	while (k < j - i + 1)
	{
		trimstr[k] = s1[i + k];
		k++;
	}
	trimstr[k] = '\0';
	return (trimstr);
}
/*
int	main(void)
{
	char str[] = "**hello, *sidy**";
	char set[] = "*-";
	char *trim = ft_strtrim(str, set);
	printf("str = %s\n", trim);
}*/