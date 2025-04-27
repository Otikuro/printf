#include "ft_printf.h"

void	ft_print_str(char *str, int *output_len)
{
	if (str == NULL)
		str = "(null)";
	while(*str)
	{
		ft_print_char(*str, output_len);
		str++;
	}
}
