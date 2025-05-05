/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_to_ascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:25:17 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/05 10:11:33 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

long	ft_recursive_power(long base, int power)
{
	long	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (base);
	if (power > 1)
		result = ft_recursive_power(base, power - 1);
	return (base * result);
}

int	ft_get_nbrlen(long number)
{
	int	i;

	i = 1;
	while (number > 9)
	{
		number /= 10;
		i++;
	}
	return (i);
}

void	ft_fillarray(char *str, long number, int negative, int total_len)
{
	int			i;
	long		pow;

	i = 0;
	if (negative)
	{
		str[i] = '-';
		i++;
	}
	while (i < total_len)
	{
		pow = ft_recursive_power(10, (total_len - i - 1));
		str[i] = (number / pow) + 48;
		number %= pow;
		i++;
	}
	str[i] = '\0';
}

char	*ft_nbr_to_ascii(long nbr)
{
	int		negative;
	int		total_len;
	char	*str;

	negative = (nbr < 0);
	if (negative)
		nbr = -nbr;
	total_len = ft_get_nbrlen(nbr) + negative;
	str = (char *)malloc(total_len + 1);
	if (str == 0)
		return (0);
	ft_fillarray(str, nbr, negative, total_len);
	return (str);
}
