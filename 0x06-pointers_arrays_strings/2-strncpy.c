/**
 * _strncpy - Copies a string from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes of src to be copied
 * Return: The copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len_s = 0;

	while (src[len_s] && len_s < n)
	{
		dest[len_s] = src[len_s];
		len_s++;
	}

	while (len_s < n)
	{
		dest[len_s] = '\0';
		len_s++;
	}
	return (dest);
}
