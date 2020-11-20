/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:55:04 by gbrittan          #+#    #+#             */
/*   Updated: 2020/11/20 18:11:18 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	hcol(char const *s, int c)
{
	int i;
	int col;

	i = 0;
	col = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			col++;
		i++;
	}
	return (col);
}

static char	*wrns(char const *news, int i, int slen)
{
	char	*str;
	int		ifl;
	int		a;

	a = 0;
	ifl = i - slen;
	str = (char *)malloc(slen);
	if (str == NULL)
		return (NULL);
	while (ifl != i)
	{
		str[a] = news[ifl];
		a++;
		ifl++;
	}
	str[a] = '\0';
	return (str);
}

static void	frees(char ***str, int a)
{
	while (a > 0)
	{
		a--;
		free((*str)[a]);
	}
	free(*str);
	*str = NULL;
}

static int	howi(char const *s, char c)
{
	int i;

	i = 0;
	if (s == NULL)
		return (i);
	while (s[i] == c && s[i] != '\0')
		i++;
	return (i);
}

char		**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		slen;
	int		a;

	i = howi(s, c);
	a = 0;
	if (s == NULL || !(str = (char **)malloc(sizeof(char**) * hcol(s, c) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		slen = 0;
		while (s[i] != c && s[i] != '\0')
			++slen && ++i;
		str[a] = wrns(s, i, slen);
		if (str[a++] == NULL)
			frees(&str, a - 1);
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	str[a] = NULL;
	return (str);
}
