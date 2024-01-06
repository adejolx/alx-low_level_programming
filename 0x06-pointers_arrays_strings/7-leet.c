/**
 * leet - encodes the characters
 * 'aeotl' in a string to '43071' respectively
 * @c: The string to encode
 * Return: The encoded string
*/
char *leet(char *c)
{
	char *code = "43071";
	int a = 0, i = 0;

	while (c[a])
	{
		while (i < 5)
		{
			if (c[a] == "aeotl"[i] || c[a] == "AEOTL"[i])
			{
				c[a] = code[i];
				break;
			}
			i++;
		}
		i = 0;
		a++;
	}
	c[a] = '\0';
	return (c);
}
