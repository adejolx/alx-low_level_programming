#include <stdio.h>

/**
 * main - prints the alphabet in lowercase followed by a new line
 * Description: increments the ascii code to print successive letters
 * Return: Always 0 (Success)
*/
int main(void)
{
	int begin = 97;
	int end = 122;

	while (begin <= end)
	{
		putchar(begin);
		begin++;
	}
		putchar(10);
	return (0);
}
