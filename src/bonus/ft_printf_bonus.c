/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:35:36 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/06 12:23:13 by juamanri         ###   ########.fr       */
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

void	ft_check_flags(char const *str, int *i, int *blank, int *plus, int *hash)
{
	(*i)++;
	while (!ft_is_conversion(str[*i]))
	{
		if (str[*i] == ' ')
			*blank = 1;
		else if (str[*i] == '+')
			*plus = 1;
		else if (str[*i] == '#')
			*hash = 1;
		(*i)++;
	}
}

void	ft_format_handler(char const *str, int *i, int *out_len, va_list args)
{
	int	blank;
	int	plus;
	int	hash;

	blank = 0;
	plus = 0;
	hash = 0;
	ft_check_flags(str, i, &blank, &plus, &hash);
	if (str[*i] == 'c' && (!blank && !plus && !hash))
		ft_print_char(va_arg(args, int), out_len);
	else if (str[*i] == 's' && (!blank && !plus && !hash))
		ft_print_str(va_arg(args, char *), out_len);
	else if (str[*i] == 'p' && (!blank && !plus && !hash))
		ft_print_ptr(va_arg(args, unsigned long), out_len);
	else if ((str[*i] == 'd' || str[*i] == 'i') && (!hash))
		ft_print_nbr_bonus((long)va_arg(args, int), out_len, blank, plus);
	else if (str[*i] == 'u' && (!blank && !plus && !hash))
		ft_print_nbr_bonus((long)va_arg(args, unsigned int), out_len, 0, 0);
	else if (str[*i] == 'x' && (!blank && !plus))
		ft_print_hex_bonus(va_arg(args, unsigned int), out_len, 0, hash);
	else if (str[*i] == 'X' && (!blank && !plus))
		ft_print_hex_bonus(va_arg(args, unsigned int), out_len, 1, hash);
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
