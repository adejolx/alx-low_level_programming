/**
 * leet - encodes the characters
 * 'aeotl' in a string to '43071' respectively
 * @c: The string to encode
 * Return: The encoded string
*/
char *leet(char *c)
{
	char *code = "43071";
	int i = 0;

	while (*c)
	{
		while (i < 5)
		{
			if (*c == "aeotl"[i] || *c == "AEOTL"[i])
			{
				*c = code[i];
				break;
			}
			i++;
		}
		i = 0;
		c++;
	}
	return (c);
}
