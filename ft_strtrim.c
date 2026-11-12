/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindiaye <sindiaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:36:44 by sindiaye          #+#    #+#             */
/*   Updated: 2026/11/12 16:19:31 by sindiaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"


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

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	rerturn(i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		taille;
	char	*trimstr;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_istrim(s1[i], set))
		i++;
	while (j >= 0 && ft_istrim(s1[j], set))
		j--;
	taille = j - i + 1;
	if (i > j)
		taille = 0;
	trimstr = malloc(taille + 1);
	if (!trimstr)
		return (NULL);
	k = 0;
	while (k < taille)
	{
		trimstr[k] = s1[k];
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