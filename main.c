/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:04:06 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/06 13:49:41 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/ft_printf_bonus.h"
#include <stdio.h>

int	main(void)
{
	ft_printf_bonus("abc\n");
	ft_printf_bonus("%d\n", 21);
	ft_printf_bonus("%c\n", 'a');
	ft_printf_bonus("%s\n", "bc");
	return (0);
}
