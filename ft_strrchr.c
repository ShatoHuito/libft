/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:55:02 by gbrittan          #+#    #+#             */
/*   Updated: 2020/11/04 15:43:35 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t a;

	a = ft_strlen(s) + 1;
	if (s[0] == '\0')
		return (NULL);
	while (a--)
	{
		if (*(s + a) == (unsigned char)c)
			return ((char*)s + a);
	}
	return (NULL);
}
