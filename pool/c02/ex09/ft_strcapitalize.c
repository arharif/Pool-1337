/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:31:26 by arharif           #+#    #+#             */
/*   Updated: 2021/08/09 15:23:46 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char	*ft_strcapitalize(char *str);
char	M(char *t);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	M;

	M = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (M && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!M && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			M = 0;
		}
		else
		{
			M = 1;
		}
		i++;
	}
	return (str);
}
