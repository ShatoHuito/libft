/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:42:35 by gbrittan          #+#    #+#             */
/*   Updated: 2020/11/07 19:17:18 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*qw;
	int		i;
	int		f;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	f = 0;
	qw = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (qw != NULL)
	{
		while (s1[i] != '\0')
			qw[f++] = s1[i++];
		i = 0;
		while (s2[i] != '\0')
			qw[f++] = s2[i++];
		qw[f++] = '\0';
		return (qw);
	}
	else
		return (NULL);
}
