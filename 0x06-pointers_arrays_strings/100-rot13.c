/**
* rot13 - encodes a string using rot13
* @s: A string to be encoded
* Return: The encoded string
*/
char *rot13(char *s)
{
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, alpha_len = 52;

	while (*s)
	{
		while (i < alpha_len)
		{
			if (*s == alpha[i])
			{
				*s = rot13[i];
				break;
			}
			i++;
		}
		i = 0;
		s++;
	}
	return (s);
}
