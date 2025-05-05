/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:37:02 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/05 10:12:57 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

void	ft_print_nbr(long nbr, int *out_len)
{
	char	*str;

	str = ft_nbr_to_ascii(nbr);
	ft_print_str(str, out_len);
	free(str);
}
