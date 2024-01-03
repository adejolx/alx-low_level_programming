#include "main.h"

/**
 * rev_string - reverses a string
 * @s: The string to be reversed
*/
void rev_string(char *s)
{
	char ch;
	int len = 0, i = 0;

	while (s[len])
	len++;

	for (; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = ch;
	}

}
