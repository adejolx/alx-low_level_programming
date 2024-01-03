#include "main.h"

/**
* _strcpy - copy for source to destination buffer
* @dest: Buffer to copy to
* @src: Buffer to copy from
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (src[len])
	len++;

	while (i <= len)
	{
		dest[i] = src[i];
		i++;

		if (i == len)
			dest[i] = '\0';
	}
	return (dest);
}
