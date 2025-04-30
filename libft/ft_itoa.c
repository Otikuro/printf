/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:25:17 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/11 15:42:56 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isnegative(long number)
{
	if (number < 0)
		return (1);
	return (0);
}

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

char	*ft_itoa(int n)
{
	long	number;
	int		negative;
	int		total_len;
	char	*str;

	number = (long)n;
	negative = ft_isnegative(number);
	if (negative)
		number = -number;
	total_len = ft_get_nbrlen(number) + negative;
	str = (char *)malloc(total_len + 1);
	if (str == 0)
		return (0);
	ft_fillarray(str, number, negative, total_len);
	return (str);
}
