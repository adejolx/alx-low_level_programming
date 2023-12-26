#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int ceil_hr = 23;
	int ceil_min = 59;
	int colon = 58;
	int i = 0;
	int j = 0;

	while (i <= ceil_hr)
	{
		while (j <= ceil_min)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(colon);
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar('\n');


			j++;
		}
		i++;
		j = 0;
	}
}
