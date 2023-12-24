#include <stdio.h>

/**
 * main - prints all possible different combinations of double-digit numbers
 * Description: only the smallest combinations are printed and
 * in ascending order
 * and a combination may not be repeated e.g. 01 and 10
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int j;
	int char_zero = 48;
	int char_nine = 57;
	int new_line = 10;
	int comma = 44;
	int space = 32;

	for (i = char_zero; i <= char_nine; i++)
	{
		for (j = char_zero + 1; j <= char_nine; j++)
		{
			if (i > j || i == j)
				continue;

			putchar(i);
			putchar(j);

			if (i != char_nine - 1 || j != char_nine)
			{
				putchar(comma);
				putchar(space);
			}
		}
	}
		putchar(new_line);
	return (0);
}
