/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:30:35 by arharif           #+#    #+#             */
/*   Updated: 2021/08/05 14:49:44 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	r;

	r = 'z' ;
	while (r >= 'a')
	{
		write(1, &r, 1);
		r--;
	}
}
