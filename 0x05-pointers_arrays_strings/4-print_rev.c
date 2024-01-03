#include "main.h"

/**
 * print_rev - prints a string in reverse followed
 * by a new line
 * @s: The string to be printed
*/
void print_rev(char *s)
{
	char *s_dup = s;
	int len = 0;

	while (*s)
	{
		s = s + 1;
		len++;
	}

	while (len > 0)
	{
		len--;
		_putchar(*(s_dup + len));
	}

	_putchar('\n');
}
