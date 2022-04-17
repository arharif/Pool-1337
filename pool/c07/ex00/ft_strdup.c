/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:22:33 by arharif           #+#    #+#             */
/*   Updated: 2021/08/17 17:27:07 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*csrc;
	int		len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	csrc = (char *)malloc (len * 1);
	if (csrc == NULL)
		return (NULL);
	len = 0;
	while (src[len] != '\0')
	{
		csrc[len] = src[len];
		len++;
	}
	csrc[len] = '\0';
	return (csrc);
}
