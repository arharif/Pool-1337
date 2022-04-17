/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:12:08 by arharif           #+#    #+#             */
/*   Updated: 2021/08/22 16:13:08 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == '\t')
		return (1);
	return (0);
}

int	is_base(char *str)
{
	int	i;
	int	j;
	int	b;

	b = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || ft_isspace(str[i]))
			b = 0;
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				b = 0;
			j++;
		}
		i++;
	}
	if (b == 1)
		return (i);
	return (-1);
}

int	is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	get_indice(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	while (is_sign(str[i]))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	if (is_base(base) != -1)
	{
		while (get_indice(str[i], base) != -1)
		{
			result = result * is_base(base) + get_indice (str[i], base);
			i++;
		}
	}
	return (result * sign);
}
