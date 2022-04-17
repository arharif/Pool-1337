/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:41:33 by arharif           #+#    #+#             */
/*   Updated: 2021/08/17 13:39:53 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int	nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < (nb / i))
	{
		i++;
	}
	if ((i * i) == nb)
		return (i);
	return (0);
}