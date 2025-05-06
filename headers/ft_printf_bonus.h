/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:50:02 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/06 12:25:14 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./ft_printf.h"

void	ft_print_hex_bonus(
			unsigned long nbr, int *out_len, int is_upper, int hash);
void	ft_print_nbr_bonus(long nbr, int *out_len, int blank, int plus);
int		ft_printf_bonus(char const *str, ...);
#endif