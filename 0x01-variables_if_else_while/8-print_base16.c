#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * and followed by a new line
 * Description: increments the ascii code to print successive letters
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num_begin = 48;
	int num_end = 57;
	int alpha_begin = 97;
	int alpha_end = 102;
	int new_line = 10;

	while (num_begin <= num_end)
	{
		putchar(num_begin);
		num_begin++;
	}

	while (alpha_begin <= alpha_end)
	{
		putchar(alpha_begin);
		alpha_begin++;
	}
		putchar(new_line);
	return (0);
}
