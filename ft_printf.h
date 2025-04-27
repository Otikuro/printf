/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:58:12 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/22 09:55:08 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *, ...);
void	ft_format_handler(char const *str, int *i, int *output_len, va_list args);
void	ft_print_char(char c, int *output_len);
void	ft_print_str(char *str, int *output_len);
#endif