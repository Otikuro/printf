#include "ft_printf.h"

void	ft_print_char(char c, int *output_len)
{
	write(1, &c, 1);
	(*output_len)++;
}
