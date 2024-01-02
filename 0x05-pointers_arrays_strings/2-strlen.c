#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string which its length is to be found
 * Return: The length of string s
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s = s + 1;
		len++;
	}
	return (len);
}
