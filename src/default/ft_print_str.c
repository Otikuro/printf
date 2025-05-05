/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:51:13 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/28 19:52:54 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

void	ft_print_str(char *str, int *output_len)
{
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		ft_print_char(*str, output_len);
		str++;
	}
}
