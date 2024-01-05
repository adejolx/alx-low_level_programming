/**
* _strcat - concatenates two strings
* @dest: The string to be concatenated to
* @src: The string to be concatenated from
* Return: The result of the concatenation
*/
char *_strcat(char *dest, char *src)
{
	int len_d = 0, len_s = 0, i = 0;

	while (*(dest + len_d))
		len_d++;

	while (*(src + len_s))
		len_s++;

	while (i <= len_s)
	{
		*(dest + len_d + i) = *(src + i);
		i++;
	}

	return (dest);
}
