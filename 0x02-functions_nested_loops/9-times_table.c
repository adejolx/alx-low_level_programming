#include "main.h"

/**
 * times_table - prints the 9 times table
 * starting with 0
 */
void times_table(void)
{
	int i;
	int j;
	int prod;
	int multiplier;
	int multiplicand;

	multiplier = 9;
	multiplicand = 9;
	for (i = 0; i <= multiplicand; i++)
	{
		for (j = 0; j <= multiplier; j++)
		{
			prod = i * j;
			if (!(prod / 100))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (prod / 100));
			}
			if (!(prod / 10))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (prod / 10));
			}
			_putchar('0' + (prod % 10));

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
