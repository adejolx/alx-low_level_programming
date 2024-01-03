#include "main.h"

/**
* puts_half - prints the second half of a string
* @str: The string to be printed
*/
void puts_half(char *str)
{
	int len = 0, i = len;

	while (str[len])
	len++;

	if (len % 2 == 0)
		i = (len / 2);
	else
		i = (len / 2) + 1;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
