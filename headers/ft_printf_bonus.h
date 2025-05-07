/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:50:02 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/07 13:34:42 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./ft_printf.h"

typedef struct s_options
{
	int	blank_signal;
	int	plus_signal;
	int	hash_signal;
}	t_options;

void	ft_print_hex_bonus(
			unsigned long nbr, int *out_len, int is_upper, t_options *options);
void	ft_print_nbr_bonus(long nbr, int *out_len, t_options *options);
int		ft_printf_bonus(char const *str, ...);
#endif