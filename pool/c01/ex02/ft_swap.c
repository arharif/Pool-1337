/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:10:20 by arharif           #+#    #+#             */
/*   Updated: 2021/08/07 16:23:24 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	per;

	per = *a;
	*a = *b;
	*b = per;
}
