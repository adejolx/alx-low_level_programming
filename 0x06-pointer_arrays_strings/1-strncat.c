/**
 * _strncat - copies at most n bytes from
 * src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of src bytes to be copied
 * Return: The concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_d = 0, len_s = 0;

	while (dest[len_d])
		len_d++;

	while (src[len_s] && len_s < n)
	{
		dest[len_d + len_s] = src[len_s];
		len_s++;
	}

	dest[len_d + len_s] = '\0';
	return (dest);
}
