#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: a character
 * Return: 1 (Failure) or 0 (Success)
*/
void _putchar(char c)
{
	write(1, &c, 1);
}
