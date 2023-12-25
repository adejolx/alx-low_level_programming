#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 * in lowercase followed by a new line
 */
void print_alphabet_x10(void)
{
	int lowercase_begin = 97;
	int lowercase_end = 122;
	int new_line = 10;
	int freq = 10;
	int i;
	int j;

	for (i = 0; i < freq; i++)
	{
		for (j = lowercase_begin; j <= lowercase_end; j++)
		{
			_putchar(j);
		}
		_putchar(new_line);
	}
}
