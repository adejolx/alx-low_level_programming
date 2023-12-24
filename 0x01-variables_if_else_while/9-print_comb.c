#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Description: numbers are printed in ascending order
 * Return: Always 0 (Success)
*/
int main(void)
{
	int begin = 48;
	int end = 57;
	int new_line = 10;
	int comma = 44;
	int space = 32;

	while (begin <= end)
	{

		putchar(begin);
		if (begin != end)
		{
			putchar(comma);
			putchar(space);
		}
		begin++;
	}
		putchar(new_line);
	return (0);
}
