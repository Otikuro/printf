/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 09:03:51 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/06 12:55:13 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

void	ft_print_hex_bonus(
	unsigned long nbr, int *out_len, int is_upper, int hash)
{
	char	*base;

	if (hash && is_upper && nbr != 0)
		ft_print_str("0X", out_len);
	if (hash && !is_upper && nbr != 0)
		ft_print_str("0x", out_len);
	if (is_upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nbr >= 16)
		ft_print_hex(nbr / 16, out_len, is_upper);
	ft_print_char(base[nbr % 16], out_len);
}
