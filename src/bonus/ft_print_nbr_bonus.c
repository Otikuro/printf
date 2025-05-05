/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:37:02 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/05 13:43:57 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf_bonus.h"

void	ft_print_nbr_bonus(long nbr, int *out_len, int plus_sign)
{
	char	*str;

	if (nbr >= 0 && plus_sign)
		ft_print_char('+', out_len);
	str = ft_nbr_to_ascii(nbr);
	ft_print_str(str, out_len);
	free(str);
}
