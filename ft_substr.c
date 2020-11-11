/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:33:57 by gbrittan          #+#    #+#             */
/*   Updated: 2020/11/11 14:57:58 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*qw;
	size_t		i;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		qw = (char *)malloc(sizeof(char) * 1);
		qw[0] = '\0';
		return (qw);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	i = 0;
	qw = (char *)malloc(sizeof(char) * (len + 1));
	if (qw == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		qw[i] = s[start];
		i++;
		start++;
	}
	qw[i] = '\0';
	return (qw);
}
