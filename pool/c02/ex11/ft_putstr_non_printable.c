/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:35:40 by arharif           #+#    #+#             */
/*   Updated: 2021/08/10 15:11:39 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_printabale(char *c)
{
	if (*c >= 32 && *c <= 126)
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	a;
	char	b;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_printable(str[i]))
		{
			write(1, &str[i], 1);
		}
		else
		{
			a = hex[(str[i] / 16)];
			b = hex[(str[i] % 16)];
			write(1, "\\", 1);
			write(1, &a, 1);
			write(1, &b, 1);
		}
		i++;
	}
}
