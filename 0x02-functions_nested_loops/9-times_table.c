#include "main.h"

/**
 * times_table - prints the 9 times table
 * starting with 0
 */
void times_table(void)
{
	int i, j;
	int prod, multiplier = 9, multiplicand = 9;

	for (i = 0; i <= multiplicand; i++)
	{
		_putchar('0');
		for (j = 1; j <= multiplier; j++)
		{
			_putchar(',');
			_putchar(' ');
			prod = i * j;

			if (prod < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (prod / 10));
			}
			_putchar('0' + (prod % 10));
		}
		_putchar('\n');
	}

}
