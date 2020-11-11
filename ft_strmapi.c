/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 17:23:03 by gbrittan          #+#    #+#             */
/*   Updated: 2020/11/11 17:56:16 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*qw;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	qw = (char *)malloc(ft_strlen(s) + 1);
	if (qw == NULL)
		return (NULL);
	while (s[i])
	{
		qw[i] = f(i, s[i]);
		i++;
	}
	qw[i] = '\0';
	return (qw);
}
