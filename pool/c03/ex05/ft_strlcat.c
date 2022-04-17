/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 12:42:32 by arharif           #+#    #+#             */
/*   Updated: 2021/08/14 15:39:43 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	i;
	unsigned int	l;

	a = 0;
	i = 0;
	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	while (dest[a] != '\0')
		a++;
	if (size <= a)
		l = l + size;
	else
		l = l + a;
	while (src[i] != '\0' && (a + 1) < size)
	{
		dest[a] = src[i];
		a++;
		i++;
	}
	dest[a] = '\0';
	return (l);
}
