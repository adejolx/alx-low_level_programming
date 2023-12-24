#include <stdio.h>

/**
 * main - prints the alphabet in lowercase in reverse
 * followed by a new line
 * Description: decrements the ascii code to print preceding letters
 * Return: Always 0 (Success)
*/
int main(void)
{
	int begin = 122;
	int end = 97;
	int new_line = 10;

	while (begin >= end)
	{
		putchar(begin);
		begin--;
	}
		putchar(new_line);
	return (0);
}
