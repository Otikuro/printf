/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:50:02 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/07 13:41:59 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

char	*ft_nbr_to_ascii(long nbr);
void	ft_print_char(char c, int *out_len);
void	ft_print_hex(unsigned long nbr, int *out_len, int is_upper);
void	ft_print_nbr(long nbr, int *out_len);
void	ft_print_ptr(unsigned long ptr, int *out_len);
void	ft_print_str(char *str, int *out_len);
int		ft_printf(char const *str, ...);
#endif