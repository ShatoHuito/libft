/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:21:26 by gbrittan          #+#    #+#             */
/*   Updated: 2020/10/30 18:21:32 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isupper(int a)
{
	if(a > 65 && a < 91)
		return (1);
	else
		return (0);
}