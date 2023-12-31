#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
* ten times
*/

void more_numbers(void)
{
	int i = 0, num_ln = 10;

	while (num_ln--)
	{
		while (i <= 14)
		{
			if (i >= 10)
				_putchar('0' + (i / 10));

			_putchar('0' + (i % 10));
			i++;
		}
		i = 0;
		_putchar('\n');
	}
}
