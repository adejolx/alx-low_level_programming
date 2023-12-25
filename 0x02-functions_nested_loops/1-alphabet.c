#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
	int lowercase_begin = 97;
	int lowercase_end = 122;
	int new_line = 10;
	int i;

	for (i = lowercase_begin; i <= lowercase_end; i++)
	{
		_putchar(i);
	}
		_putchar(new_line);
}
