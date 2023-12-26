#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int ceil_hr_ten = 2;
	int ceil_hr_unit = 10;
	int ceil_min_ten = 6;
	int ceil_min_unit = 10;
	int hr_ten = 0;
	int hr_unit = 0;
	int min_ten = 0;
	int min_unit = 0;
	int colon = 58;

	while (hr_ten <= ceil_hr_ten)
	{
		while (hr_unit < ceil_hr_unit)
		{
			while (min_ten < ceil_min_ten)
			{
				while (min_unit < ceil_min_unit)
				{
					_putchar('0' + hr_ten);
					_putchar('0' + hr_unit);
					_putchar(colon);
					_putchar('0' + min_ten);
					_putchar('0' + min_unit);
					_putchar('\n');
					min_unit++;
				}
				min_unit = 0;
				min_ten++;
			}
			min_ten = 0;
			hr_unit++;

			if (hr_ten == 2)
				ceil_hr_unit = 4;
		}
		hr_unit = 0;
		hr_ten++;
	}
}
