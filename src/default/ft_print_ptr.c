/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 20:27:42 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/05 10:15:00 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

void	ft_print_ptr(unsigned int ptr, int *out_len)
{
	if (ptr == 0)
		ft_print_str("(nil)", out_len);
	else
	{
		ft_print_str("0x", out_len);
		ft_print_hex(ptr, out_len, 0);
	}
}
