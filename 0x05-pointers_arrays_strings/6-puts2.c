#include "main.h"
#include <stdio.h>

/**
* puts2 - prints every other character of a string
* starting with the first character, followed by
* a new line
* @str: string to be processed
*/
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[len])
		len++;

	while (i < len)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
