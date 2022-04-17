/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:21:26 by arharif           #+#    #+#             */
/*   Updated: 2021/08/17 15:13:26 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_params(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	char	*max;
	int		i;

	(void)ac;
	(void)av;
	i = 1;
	while (i < (ac - 1))
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			max = av[i];
			av[i] = av[i + 1];
			av[i + 1] = max;
			i = 1;
		}
		else
			i++;
	}
	ft_print_params(ac, av);
	return (0);
}
