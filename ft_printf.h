/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:50:02 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/28 20:07:19 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_print_char(char c, int *out_len);
void	ft_print_nbr(int nbr, int *out_len);
int		ft_printf(char const *str, ...);
void	ft_format_handler(char const *str, int *i, int *out_len, va_list args);
void	ft_print_str(char *str, int *out_len);
#endif