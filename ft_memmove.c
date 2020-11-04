/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:17:53 by gbrittan          #+#    #+#             */
/*   Updated: 2020/11/04 19:42:50 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	if (!dest && !src)
		return (NULL);
	str1 = (unsigned char*)dest;
	str2 = (unsigned char*)src;
	if (*str2 > *str1)
	{
		while (n--)
			*(str1++) = *(str2++);
		return (dest);
	}
	else
	{
		while (n--)
			*(str1 + n) = *(str2 + n);
		return (dest);
	}
}
