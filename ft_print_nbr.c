/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:37:02 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/28 20:06:41 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(int nbr, int *output_len)
{
	char	*str;

	str = ft_itoa(nbr);
	ft_print_str(str, output_len);
	free(str);
}
