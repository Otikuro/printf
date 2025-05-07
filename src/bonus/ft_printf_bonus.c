/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:35:36 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/07 13:42:44 by juamanri         ###   ########.fr       */
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

void	ft_check_flags(char const *str, int *i, t_options *options)
{
	(*i)++;
	while (!ft_is_conversion(str[*i]))
	{
		if (str[*i] == ' ')
			options->blank_signal = 1;
		else if (str[*i] == '+')
			options->plus_signal = 1;
		else if (str[*i] == '#')
			options->hash_signal = 1;
		(*i)++;
	}
}

int	ft_format_handler(char const *str, int *i, int *out_len, va_list args)
{
	t_options	*options;

	options = (t_options *)malloc(sizeof(t_options));
	if (options == NULL)
		return (0);
	ft_check_flags(str, i, options);
	if (str[*i] == 'c')
		ft_print_char(va_arg(args, int), out_len);
	else if (str[*i] == 's')
		ft_print_str(va_arg(args, char *), out_len);
	else if (str[*i] == 'p')
		ft_print_ptr(va_arg(args, unsigned long), out_len);
	else if (str[*i] == 'd' || str[*i] == 'i')
		ft_print_nbr_bonus((long)va_arg(args, int), out_len, options);
	else if (str[*i] == 'u')
		ft_print_nbr_bonus((long)va_arg(args, unsigned int), out_len, options);
	else if (str[*i] == 'x')
		ft_print_hex_bonus(va_arg(args, unsigned int), out_len, 0, options);
	else if (str[*i] == 'X')
		ft_print_hex_bonus(va_arg(args, unsigned int), out_len, 1, options);
	else if (str[*i] == '%')
		ft_print_char('%', out_len);
	return (1);
}

int	ft_printf_bonus(char const *str, ...)
{
	int		i;
	int		out_len;
	va_list	args;

	if (str == NULL)
		return (-1);
	i = 0;
	out_len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (!ft_format_handler(str, &i, &out_len, args))
				return (-1);
		}
		else
			ft_print_char(str[i], &out_len);
		i++;
	}
	va_end(args);
	return (out_len);
}
