/**
* rot13 - encodes a string using rot13
* @s: A string to be encoded
* Return: The encoded string
*/
char *rot13(char *s)
{
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int a = 0, i = 0, alpha_len = 52;

	while (s[a])
	{
		while (i < alpha_len)
		{
			if (s[a] == alpha[i])
			{
				s[a] = rot13[i];
				break;
			}
			i++;
		}
		i = 0;
		a++;
	}
	s[a] = '\0';
	return (s);
}
