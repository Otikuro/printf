/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:04:06 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/07 13:37:13 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/ft_printf_bonus.h"
#include <stdio.h>

int	main(void)
{
	int	num = 0;
	char	c = 'a';
	
	/*PRINTF ORIGINAL*/
	// 	//SIN ARGUMENTOS
	// printf("----------------PRINTF ORIGINAL----------------\n");
	// printf("%d\n", printf(NULL));
	// printf("%d\n", printf(""));
	// printf("%d\n", printf(" "));
	// printf("%d\n", printf("abc\t"));
	// printf("%d\n", printf("%%\t"));
	// 	//CHAR
	// printf("\t----------------CHAR----------------\n");
	// printf("%d\n", printf("a%c\t", ' '));
	// printf("%d\n", printf("a%c\t", '\n'));
	// printf("%d\n", printf("a%c\t", 'a'));
	// 	//STRING
	// printf("\t----------------STRING----------------\n");
	// printf("%d\n", printf("a%s\t", ""));
	// printf("%d\n", printf("a%s\t", " "));
	// printf("%d\n", printf("a%s\t", "abc123"));
	// printf("%d\n", printf("a%s\t", "'%'\""));
	// 	//INT
	// printf("\t----------------INT----------------\n");
	// printf("%d\n", printf("a%d\t", -2147483647));
	// printf("%d\n", printf("a%i\t", -2147483647));
	// printf("%d\n", printf("a%d\t", -1));
	// printf("%d\n", printf("a%i\t", -1));
	// printf("%d\n", printf("a%d\t", 0));
	// printf("%d\n", printf("a%i\t", 0));
	// printf("%d\n", printf("a%d\t", 1));
	// printf("%d\n", printf("a%i\t", 1));
	// printf("%d\n", printf("a%d\t", 2147483647));
	// printf("%d\n", printf("a%i\t", 2147483647));
	// 	//UNSIGNED INT
	// printf("\t----------------UNSIGNED INT----------------\n");
	// printf("%d\n", printf("a%u\t", -1));
	// printf("%d\n", printf("a%u\t", 0));
	// printf("%d\n", printf("a%u\t", 1));
	// printf("%d\n", printf("a%u\t", 2147483647));
	// 	//HEXADECIMAL
	// printf("\t----------------HEXADECIMAL----------------\n");
	// printf("%d\n", printf("a%x\t", -1));
	// printf("%d\n", printf("a%X\t", -1));
	// printf("%d\n", printf("a%x\t", 0));
	// printf("%d\n", printf("a%X\t", 0));
	// printf("%d\n", printf("a%x\t", 1));
	// printf("%d\n", printf("a%X\t", 1));
	// printf("%d\n", printf("a%x\t", 2147483647));
	// printf("%d\n", printf("a%X\t", 2147483647));
	// 	//POINTER
	// printf("\t----------------POINTER----------------\n");
	// printf("%d\n", printf("a%p\t", (void *) NULL));
	// printf("%d\n", printf("a%p\t", &num));
	// printf("%d\n", printf("a%p\t", &c));

	//BONUS ' '
	printf("\t----------------' '----------------\n");
	printf("%d\n", printf("% d", -1));
	printf("%d\n", printf("% i", 0));
	printf("%d\n", printf("% d", 1));
	printf("%d\n", printf("a% d b", -2147483647));
	printf("%d\n", printf("a% d b", 2147483647));
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
	
	/*PRINTF NORMAL*/
	// //SIN ARGUMENTOS
	// printf("----------------FT_PRINTF----------------\n");
	// printf("%d\n", ft_printf(NULL));
	// printf("%d\n", ft_printf(""));
	// printf("%d\n", ft_printf(" "));
	// printf("%d\n", ft_printf("abc\t"));
	// printf("%d\n", ft_printf("%%\t"));
	// //CHAR
	// printf("\t----------------CHAR----------------\n");
	// printf("%d\n", ft_printf("a%c\t", ' '));
	// printf("%d\n", ft_printf("a%c\t", '\n'));
	// printf("%d\n", ft_printf("a%c\t", 'a'));
	// //STRING
	// printf("\t----------------STRING----------------\n");
	// printf("%d\n", ft_printf("a%s\t", ""));
	// printf("%d\n", ft_printf("a%s\t", " "));
	// printf("%d\n", ft_printf("a%s\t", "abc123"));
	// printf("%d\n", ft_printf("a%s\t", "'%'\""));
	// //INT
	// printf("\t----------------INT----------------\n");
	// printf("%d\n", ft_printf("a%d\t", -2147483647));
	// printf("%d\n", ft_printf("a%i\t", -2147483647));
	// printf("%d\n", ft_printf("a%d\t", -1));
	// printf("%d\n", ft_printf("a%i\t", -1));
	// printf("%d\n", ft_printf("a%d\t", 0));
	// printf("%d\n", ft_printf("a%i\t", 0));
	// printf("%d\n", ft_printf("a%d\t", 1));
	// printf("%d\n", ft_printf("a%i\t", 1));
	// printf("%d\n", ft_printf("a%d\t", 2147483647));
	// printf("%d\n", ft_printf("a%i\t", 2147483647));
	// //UNSIGNED INT
	// printf("\t----------------UNSIGNED INT----------------\n");
	// printf("%d\n", ft_printf("a%u\t", -1));
	// printf("%d\n", ft_printf("a%u\t", 0));
	// printf("%d\n", ft_printf("a%u\t", 1));
	// printf("%d\n", ft_printf("a%u\t", 2147483647));
	// //HEXADECIMAL
	// printf("\t----------------HEXADECIMAL----------------\n");
	// printf("%d\n", ft_printf("a%x\t", -1));
	// printf("%d\n", ft_printf("a%X\t", -1));
	// printf("%d\n", ft_printf("a%x\t", 0));
	// printf("%d\n", ft_printf("a%X\t", 0));
	// printf("%d\n", ft_printf("a%x\t", 1));
	// printf("%d\n", ft_printf("a%X\t", 1));
	// printf("%d\n", ft_printf("a%x\t", 2147483647));
	// printf("%d\n", ft_printf("a%X\t", 2147483647));
	// //POINTER
	// printf("\t----------------POINTER----------------\n");
	// printf("%d\n", ft_printf("a%p\t", (void *) NULL));
	// printf("%d\n", ft_printf("a%p\t", &num));
	// printf("%d\n", ft_printf("a%p\t", &c));

	/*BONUS*/
	printf("----------------BONUS----------------\n");
	//BONUS ' '
	printf("\t----------------' '----------------\n");
	printf("%d\n", ft_printf_bonus("% d", -1));
	printf("%d\n", ft_printf_bonus("% i", 0));
	printf("%d\n", ft_printf_bonus("% d", 1));
	printf("%d\n", ft_printf_bonus("a% d b", -2147483647));
	printf("%d\n", ft_printf_bonus("a% d b", 2147483647));
	//BONUS '+'
	printf("\t----------------'+'----------------\n");
	printf("%d\n", ft_printf_bonus("%+d", -1));
	printf("%d\n", ft_printf_bonus("%+i", 0));
	printf("%d\n", ft_printf_bonus("%+d", 1));
	printf("%d\n", ft_printf_bonus("a%+d b", -2147483647));
	printf("%d\n", ft_printf_bonus("a%+d b", 2147483647));
	printf("%d\n", ft_printf_bonus(" %+d ", 0));
	//BONUS '#'
	printf("\t----------------'#'----------------\n");
	printf("%d\n", ft_printf_bonus("a%#x\t", -1));
	printf("%d\n", ft_printf_bonus("a%#X\t", -1));
	printf("%d\n", ft_printf_bonus("a%#x\t", 0));
	printf("%d\n", ft_printf_bonus("a%#X\t", 0));
	printf("%d\n", ft_printf_bonus("a%#x\t", 1));
	printf("%d\n", ft_printf_bonus("a%#X\t", 1));
	printf("%d\n", ft_printf_bonus("a%#x\t", 2147483647));
	printf("%d\n", ft_printf_bonus("a%#X\t", 2147483647));
	return (0);
}
