/**
* rot13 - encodes a string using rot13
* @s: A string to be encoded
* Return: The encoded string
*/
char *rot13(char *s)
{
	int up_a = 65, up_z = 90, low_a = 97, low_z = 122, rem;

	while (*s)
	{
		if (*s >= up_a && *s <= up_z)
		{
			if (*s + 13 > up_z)
			{
				rem = 13 - (up_z - *s);
				*s = (up_a - 1) + rem;
			}
			else
			{
				*s += 13;
			}
		}

		if (*s >= low_a && *s <= low_z)
		{
			if (*s + 13 > low_z)
			{
				rem = 13 - (low_z - *s);
				*s = (low_a - 1) + rem;
			}
			else
			{
				*s += 13;
			}
		}
		s++;
	}
	return (s);
}
