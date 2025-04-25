/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:35:36 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/22 15:51:36 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
#include <ctype.h>

int	ft_printf(char const *str, ...)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			write(1, (str + i), 1);
		else
			write(1, (str + i), 1);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%k");
	ft_printf("xd");
	return (0);
}
