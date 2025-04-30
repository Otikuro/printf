/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:37:02 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/28 20:06:41 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(int nbr, int *output_len)
{
	long	num;

	num = nbr;
	if (num < 0)
	{
		ft_print_char('-', output_len);
		num = -num;
	}
	if (num > 9)
		ft_print_nbr(num / 10, output_len);
	ft_print_char(((num % 10) + '0'), output_len);
}
