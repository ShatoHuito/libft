/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:07:18 by gbrittan          #+#    #+#             */
/*   Updated: 2020/10/30 19:11:02 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strrev(char *str)
{
	int				len;
	int				i;
	char			buff;

	len = 0;
	i = 0;
	while (str[len] != '\0')
		len++;
	while (len - 1 > i)
	{
		buff = str[i];
		str[i] = str[len - 1];
		str[len - 1] = buff;
		len--;
		i++;
	}
	return (str);
}
