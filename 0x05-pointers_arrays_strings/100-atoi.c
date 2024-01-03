#include "main.h"
#include <limits.h>

/**
 * _atoi - convert string to integer
 * @s: The string to be converted to an integer
 * Return: The integer result
*/
int _atoi(char *s)
{
	int sign = 1, result = 0;

	while (*s)
	{
		if (*s == '-' || *s == '+')
		{
			sign = (*s == '-') ? -sign : sign;
			s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - '0');

			if (!(*(s + 1) >= '0' && *(s + 1) <= '9'))
			break;

			s++;
		}
		else
		s++;
	}

	result *= sign;
	return (result);
}
