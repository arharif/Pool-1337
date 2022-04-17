/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:26:19 by arharif           #+#    #+#             */
/*   Updated: 2021/08/10 15:06:25 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ptr;

	ptr = dest;
	while (*src && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	if (n >= 1)
		*dest = '\0';
	return (ptr);
}

unsigned inr	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;

	length = ft_strlen(str);
	if (!size)
		return (length);
	else if (length + 1 < size)
	{
		ft_strncpy(dest, src, length + 1);
	}
	else
	{
		ft_strncpy(dest, src, length);
		dest[size - 1] = '\0';
	}
	return (length);
}
