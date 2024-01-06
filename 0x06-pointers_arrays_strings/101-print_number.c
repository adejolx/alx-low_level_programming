#include "main.h"
/**
 * print_number - print an integer
 * @n: An integer to be printed
*/
void print_number(int n)
{
	int sign;
	unsigned int abs_n;

	if (n < 0)
	{
		sign = '-';
		abs_n = -n;
		_putchar(sign);
	}
	else
	{
		abs_n = n;
	}
	if (abs_n / 10 != 0)
		print_number(abs_n / 10);
	_putchar((abs_n % 10) + '0');
}
