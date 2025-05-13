/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:37:02 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/12 09:41:47 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf_bonus.h"

void	ft_print_nbr_bonus(long nbr, int *out_len, t_options *options)
{
	char	*str;

	if (options->blank_signal && !options->plus_signal && nbr >= 0)
		ft_print_char(' ', out_len);
	if (options->plus_signal && nbr >= 0)
		ft_print_char('+', out_len);
	str = ft_nbr_to_ascii(nbr);
	if (str == NULL)
		return ;
	ft_print_str(str, out_len);
	free(str);
}
