#include "ft_print.h"

void	ft_putnbr_fd(int nbr, int *output_len)
{
		long	num;

		num = nbr;
        if (num < 0)
        {
                ft_print_char('-', output_len);
                num = -num;
        }
        if (num > 9)
                ft_putnbr_fd(num / 10, output_len);
        ft_print_char(((num % 10) + '0'), output_len);
}