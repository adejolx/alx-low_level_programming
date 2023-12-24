#include <stdio.h>

/**
 * main - prints all single digit of base 10 starting from 0
 * and followed by a new line
 * Description: increments the ascii code to print successive letters
 * Return: Always 0 (Success)
*/
int main(void)
{
	int begin = 48;
	int end = 57;
	int new_line = 10;

	while (begin <= end)
	{
		putchar(begin);
		begin++;
	}
		putchar(new_line);
	return (0);
}
