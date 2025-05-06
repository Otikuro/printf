/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:37:02 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/06 09:32:31 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf_bonus.h"

void	ft_print_nbr_bonus(long nbr, int *out_len, int blank, int plus)
{
	char	*str;

	if (blank && !plus)
		ft_print_char(' ', out_len);
	if (nbr >= 0 && plus)
		ft_print_char('+', out_len);
	str = ft_nbr_to_ascii(nbr);
	ft_print_str(str, out_len);
	free(str);
}
