/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:25:40 by gbrittan          #+#    #+#             */
/*   Updated: 2020/11/03 14:50:22 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*qwe;
	size_t			i;

	qwe = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		qwe[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
