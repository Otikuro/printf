/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:04:06 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/05 13:33:59 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_conversion(char c)
{
	char	*conversions;

	conversions = "cspdiuxX%";
	while (*conversions)
	{
		if (c == *conversions)
			return (1);
		conversions++;
	}
	return (0);
}

void	ft_check_format(char const *str, int *i, int blank_sign, int add_sign)
{
	int	blank_sign;
	int	add_sign;

	blank_sign = 0;
	add_sign = 0;
	(*i)++;
	while (!ft_is_conversion(str[*i]))
	{
		if (str[*i] == ' ')
			blank_sign = 1;
		else if (str[*i] == '+')
			add_sign = 1;
		(*i)++;
	}
}

int	main(void)
{
	printf("%+d", 0);
	return (0);
}
