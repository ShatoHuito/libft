/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:55:04 by gbrittan          #+#    #+#             */
/*   Updated: 2020/11/12 19:55:10 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int howdiscr(char const *s, int c)
{
	int i;
	int col;

	i = 0;
	col = 0;
	while(s[i] != '\0')
	{
		i++;
		if(s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			col++;
	}
	return (col);
}

char *ft_wrns (char *news, int i, int slen)
{
	char *qw;
	int ifl;
	int a;

	a = 0;
	ifl = i - slen;
	qw = (char *)malloc(slen + 1);
	while(ifl != i)
	{
		qw[a] = news[ifl];
		a++;
		ifl++;
	}
	qw[a] = '\0';
	return (qw);
}




char **ft_split(char const *s, char c)
{
	char **qw;
	char *news;
	int i;
	int slen;
	int a;

	i = 0;
	slen = 0;
	a = 0;
	news = ft_strtrim(s, &c);
	if (!(qw = (char **)malloc(sizeof(char**) * howdiscr(news, c) + 1)))
		return (NULL);
	while (news[i] != '\0')
	{
		while (news[++i] != c)
			slen++;
		qw[++a] = ft_wrns(news, i, slen);
		slen = 0;
		while (news[i] == c)
			i++;
	}
	qw[a] = NULL;
	return (qw);
}
