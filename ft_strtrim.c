/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:20:43 by gbrittan          #+#    #+#             */
/*   Updated: 2020/11/11 16:39:26 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*ret_onechar(char *qw)
{
	qw = (char *)malloc(1);
	qw[0] = '\0';
	return (qw);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	int			iend;
	int			iqw;
	char		*qw;

	if (s1 == NULL || set == NULL)
		return (NULL);
	qw = NULL;
	i = 0;
	iqw = 0;
	iend = ft_strlen(s1) - 1;
	while (check_set(s1[i], set) == 0)
		i++;
	while (check_set(s1[iend], set) == 0)
		iend--;
	if (i >= iend)
		return (ret_onechar(qw));
	qw = (char *)malloc(iend - i + 2);
	if (qw == NULL)
		return (NULL);
	while (i <= iend)
		qw[iqw++] = s1[i++];
	qw[iqw++] = '\0';
	return (qw);
}
