#include "main.h"

/**
 * print_times_table - prints the times table starting with 0
 * @n: a number from 0 to 15
 */
void print_times_table(int n)
{
	int i, j;
	int prod, floor = 0, ceil = 15, multiplier = n, multiplicand = n;

	if (n > floor && n < ceil)
	{
		for (i = 0; i <= multiplicand; i++)
		{
			_putchar('0' + 0);

			for (j = 1; j <= multiplier; j++)
			{
				_putchar(',');
				_putchar(' ');
				prod = i * j;

				if (prod < 100)
					_putchar(' ');

				if (prod < 10)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar('0' + (prod / 100));
					_putchar('0' + ((prod % 100) / 10));
				}

				if (prod >= 10 && prod < 100)
					_putchar('0' + (prod / 10));

				_putchar('0' + (prod % 10));
			}
			_putchar('\n');
		}
	}
}
