/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 17:57:11 by gbrittan          #+#    #+#             */
/*   Updated: 2020/11/11 20:39:20 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		i_len(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*qw;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0 || n == -0)
		return (ft_strdup("0"));
	i = i_len(n);
	if (!(qw = (char *)malloc(i + 1)))
		return (NULL);
	if (n < 0)
	{
		qw[0] = '-';
		n = -n;
	}
	qw[i] = '\0';
	while (n > 0)
	{
		qw[--i] = n % 10 + '0';
		n = n / 10;
	}
	return (qw);
}
