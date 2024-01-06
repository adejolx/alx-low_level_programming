/**
 * string_toupper - convert lowercase characters in string
 * to uppercase
 * @c: A string to be processed
 * Return: The processed string
 */
char *string_toupper(char *c)
{
	int i = 0, diff = 32, upper_a = 65, upper_z = 90;

	while (c[i])
	{
		if (c[i] >= (upper_a + diff) && c[i] <= (upper_z + diff))
			c[i] -= diff;
		i++;
	}
	return (c);
}
