/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:07:33 by arharif           #+#    #+#             */
/*   Updated: 2021/08/17 13:39:12 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int	nb, int	power)
{
	if (power < 0)
		return (0);
	else if (nb == 1 || power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power - 1)));
}
