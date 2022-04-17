/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:51:27 by arharif           #+#    #+#             */
/*   Updated: 2021/08/07 14:12:58 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	b;

	b = nb;
	if (b < 0)
	{
		b = b * -1;
		ft_putchar('-');
	}
	if (b >= 10)
	{
		ft_putnbr(b / 10);
		ft_putnbr(b % 10);
	}
	else
	{
		ft_putchar(b + '0');
	}
}
