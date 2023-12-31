#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
*/
void print_numbers(void)
{
	int digit_begin = 48, digit_end = 57, i = digit_begin;

	while (i <= digit_end)
	{
		_putchar(i);
		i++;
	}
		_putchar('\n');
}
