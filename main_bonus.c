/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 09:53:01 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/12 09:58:26 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/ft_printf_bonus.h"
#include <stdio.h>

int	main(void)
{
	/*PRINTF ORIGINAL*/
	printf("----------------PRINTF ORIGINAL----------------\n");
	printf("\t----------------'-'----------------\n");
	printf("%d\n", printf("%-1c", '0'));
	printf("%d\n", printf(" %-2c ", '0'));
	//BONUS ' '
	printf("\t----------------' '----------------\n");
	printf("%d\n", printf("% d\t", -1));
	printf("%d\n", printf("% i\t", 0));
	printf("%d\n", printf("% d\t", 1));
	printf("%d\n", printf("a% d b\t", -2147483647));
	printf("%d\n", printf("a% d b\t", 2147483647));
	//BONUS '+'
	printf("\t----------------'+'----------------\n");
	printf("%d\n", printf("%+d", -1));
	printf("%d\n", printf("%+i", 0));
	printf("%d\n", printf("%+d", 1));
	printf("%d\n", printf("a%+d b", -2147483647));
	printf("%d\n", printf("a%+d b", 2147483647));
	printf("%d\n", printf(" %+d ", 0));
	//BONUS '#'
	printf("\t----------------'#'----------------\n");
	printf("%d\n", printf("a%#x\t", -1));
	printf("%d\n", printf("a%#X\t", -1));
	printf("%d\n", printf("a%#x\t", 0));
	printf("%d\n", printf("a%#X\t", 0));
	printf("%d\n", printf("a%#x\t", 1));
	printf("%d\n", printf("a%#X\t", 1));
	printf("%d\n", printf("a%#x\t", 2147483647));
	printf("%d\n", printf("a%#X\t", 2147483647));


	/*PRINTF BONUS*/
	printf("----------------PRINTF BONUS----------------\n");
		//BONUS ' '
	printf("\t----------------' '----------------\n");
	printf("%d\n", ft_printf("% d", -1));
	printf("%d\n", ft_printf("% i", 0));
	printf("%d\n", ft_printf("% d", 1));
	printf("%d\n", ft_printf("a% d b", -2147483647));
	printf("%d\n", ft_printf("a% d b", 2147483647));
		//BONUS '+'
	printf("\t----------------'+'----------------\n");
	printf("%d\n", ft_printf("%+d", -1));
	printf("%d\n", ft_printf("%+i", 0));
	printf("%d\n", ft_printf("%+d", 1));
	printf("%d\n", ft_printf("a%+d b", -2147483647));
	printf("%d\n", ft_printf("a%+d b", 2147483647));
	printf("%d\n", ft_printf(" %+d ", 0));
		//BONUS '#'
	printf("\t----------------'#'----------------\n");
	printf("%d\n", ft_printf("a%#x\t", -1));
	printf("%d\n", ft_printf("a%#X\t", -1));
	printf("%d\n", ft_printf("a%#x\t", 0));
	printf("%d\n", ft_printf("a%#X\t", 0));
	printf("%d\n", ft_printf("a%#x\t", 1));
	printf("%d\n", ft_printf("a%#X\t", 1));
	printf("%d\n", ft_printf("a%#x\t", 2147483647));
	printf("%d\n", ft_printf("a%#X\t", 2147483647));
	return (0);
}
