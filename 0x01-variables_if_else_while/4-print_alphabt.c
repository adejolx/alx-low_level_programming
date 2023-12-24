#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 * Description: increments the ascii code to print successive letters
 * Return: Always 0 (Success)
*/
int main(void)
{
	int begin = 97;
	int end = 122;
	int char_e = 101;
	int char_q = 113;

	while (begin <= end)
	{
		if (begin == char_e || begin == char_q)
			begin++;
		putchar(begin);
		begin++;
	}
		putchar(10);
	return (0);
}
