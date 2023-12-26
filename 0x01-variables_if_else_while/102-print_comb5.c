#include <stdio.h>

/**
 * main - prints all possible combinations of two double-digit numbers
 * Description: combinations are printed in ascending order
 * and a combination may not be repeated e.g. 01 and 10
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0, j = 0;
	int _ceil = 100, new_line = 10, comma = 44, space = 32;

	while (i < _ceil)
	{
		while (j < _ceil)
		{
			if (i < j)
			{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
				putchar(space);
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));

				if (i  != 98 || j != 99)
				{
					putchar(comma);
					putchar(space);
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	putchar(new_line);
	return (0);
}
