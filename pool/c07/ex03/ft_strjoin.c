/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:40:34 by arharif           #+#    #+#             */
/*   Updated: 2021/08/18 16:01:21 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <unistd.h>
#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_sum_strlen(int size, char **strs)
{
	int	i;
	int	sum;

	sum = 0;
	i = 1;
	while (i < size)
	{
		sum = sum + ft_strlen(strs[i]);
		i++;
	}
	return (sum);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, car **strs, char *sep)
{
	int		i;
	char	*tab;
	int		lsum;

	if (size == 0)
	{
		tab = malloc(1);
		*tab = 0;
		return (tab);
	}
	lsum = ft_sum_strlen(size, strs);
	lsum = lsum + ft_strlen(sep) * (size - 1);
	tab = (char *) malloc (lsum * 1);
	if (tab == NULL)
		return (NULL);
	i = 1;
	tab[0] = '\0';
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i != size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}

/*int		main(int argc, char *argv[])
{
	char	*str;
	int		i;
	char	sep[2];

	sep[0] = ' ';
	sep[1] = ',';
	i = 0;
	str = ft_strjoin(argc, argv, sep);
	printf("%d\n", ft_strlen(str));
	write(1, str, ft_strlen(str));
}*/
