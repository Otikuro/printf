/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:35:36 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/05 13:47:25 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf_bonus.h"
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

void	ft_check_flags(char const *str, int *i, int *blank_sign, int *add_sign)
{
	(*i)++;
	while (!ft_is_conversion(str[*i]))
	{
		if (str[*i] == ' ')
			*blank_sign = 1;
		else if (str[*i] == '+')
			*add_sign = 1;
		(*i)++;
	}
}

void	ft_format_handler(char const *str, int *i, int *out_len, va_list args)
{
	int	blank_sign;
	int	add_sign;

	blank_sign = 0;
	add_sign = 0;
	ft_check_flags(str, i, &blank_sign, &add_sign);
	if (str[*i] == 'c')
		ft_print_char(va_arg(args, int), out_len);
	else if (str[*i] == 's')
		ft_print_str(va_arg(args, char *), out_len);
	else if (str[*i] == 'p')
		ft_print_ptr(va_arg(args, unsigned int), out_len);
	else if (str[*i] == 'd' || str[*i] == 'i')
		ft_print_nbr_bonus((long)va_arg(args, int), out_len, add_sign);
	else if (str[*i] == 'u')
		ft_print_nbr_bonus((long)va_arg(args, unsigned int), out_len, add_sign);
	else if (str[*i] == 'x')
		ft_print_hex(va_arg(args, unsigned int), out_len, 0);
	else if (str[*i] == 'X')
		ft_print_hex(va_arg(args, unsigned int), out_len, 1);
	else if (str[*i] == '%')
		ft_print_char('%', out_len);
	(*i)++;
}

int	ft_printf_bonus(char const *str, ...)
{
	int		i;
	int		out_len;
	va_list	args;

	if (str == NULL)
		return (0);
	i = 0;
	out_len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			ft_format_handler(str, &i, &out_len, args);
		else
			ft_print_char(str[i], &out_len);
		i++;
	}
	return (out_len);
}
