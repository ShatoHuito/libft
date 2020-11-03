/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:07:59 by gbrittan          #+#    #+#             */
/*   Updated: 2020/11/03 19:57:23 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t i;
	size_t f;

	i = 0;
	f = 0;
	while (dst[i] && i < len)
		i++;
	while (src[f] && (i + f + 1) < len)
	{
		dst[i+f] = src[f];
		f++;
	}
	if (i < len)
		dst[i + f] = '\0';
	return(i + ft_strlen(src));
}

#include <stdio.h>
int main(void)
{
	char buf[15];
	char qw[] = "qwerty";
	printf("%zu", ft_strlcat(buf, qw, 4));
	return 0;
}



