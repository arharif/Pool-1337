/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:00:33 by arharif           #+#    #+#             */
/*   Updated: 2021/08/07 17:13:54 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		write(1, &str[t], 1);
		t++;
	}
}