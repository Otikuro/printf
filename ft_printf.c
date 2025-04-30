/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:35:36 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/28 19:57:36 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <ctype.h>

void	ft_format_handler(char const *str, int *i, int *out_len, va_list args)
{
	if (str[*i + 1] == 'c')
		ft_print_char(va_arg(args, int), out_len);
	else if (str[*i + 1] == 's')
		ft_print_str(va_arg(args, char *), out_len);
	//else if (str[*i + 1] == 'p')
	else if (str[*i + 1] == 'd' || str[*i + 1] == 'i')
		ft_print_nbr(va_arg(args, int), out_len);
	//else if (str[*i + 1] == 'u')
	//else if (str[*i + 1] == 'x')
	//else if (str[*i + 1] == 'X')
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

// int	main(void)
// {
// 	printf("%d\n", ft_printf("ab%c%%\n", 'a'));
// 	return (0);
// }
