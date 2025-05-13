/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_width_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 08:59:37 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/12 09:00:02 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf_bonus.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_check_width(char const *str, int *i)
{
	int	width;

	width = 0;
	while (ft_isdigit(str[*i]))
	{
		width = (width * 10) + (str[*i] - '0');
		(*i)++;
	}
	return (width);
}

void	ft_fill_width(int width, int *out_len)
{
	int	i;

	i = 0;
	while (i < width)
	{
		ft_print_char(' ', out_len);
		i++;
	}
}
