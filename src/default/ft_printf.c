/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:35:36 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/06 11:15:18 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

void	ft_format_handler(char const *str, int *i, int *out_len, va_list args)
{
	if (str[*i + 1] == 'c')
		ft_print_char(va_arg(args, int), out_len);
	else if (str[*i + 1] == 's')
		ft_print_str(va_arg(args, char *), out_len);
	else if (str[*i + 1] == 'p')
		ft_print_ptr(va_arg(args, unsigned long), out_len);
	else if (str[*i + 1] == 'd' || str[*i + 1] == 'i')
		ft_print_nbr((long)va_arg(args, int), out_len);
	else if (str[*i + 1] == 'u')
		ft_print_nbr((long)va_arg(args, unsigned int), out_len);
	else if (str[*i + 1] == 'x')
		ft_print_hex(va_arg(args, unsigned int), out_len, 0);
	else if (str[*i + 1] == 'X')
		ft_print_hex(va_arg(args, unsigned int), out_len, 1);
	else if (str[*i + 1] == '%')
		ft_print_char('%', out_len);
	(*i)++;
}

int	ft_printf(char const *str, ...)
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
