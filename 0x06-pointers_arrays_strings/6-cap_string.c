/**
 * cap_string - capitalize all words of a string
 * @c: The string to be processed
 * Return: The capitalized string
 */
char *cap_string(char *c)
{
	int i = 0, j, diff = 32, low_a = 97, low_z = 122;

	while (c[i])
	{
		if (i == 0 && c[i] >= low_a && c[i] <= low_z)
			c[i] -= diff;

		if (i > 0)
		{
			j = i - 1;
			if (c[j] == '\t' || c[j] == '\n' || c[j] == '\v')
			{
				if (c[i] >= low_a && c[i] <= low_z)
				c[i] -= diff;
			}
			else if (c[j] == ' ' || c[j] == ',' || c[j] == '.' || c[j] == ';' ||
				c[j] == '!' || c[j] == '?' || c[j] == '"' || c[j] == '(' ||
				c[j] == ')' || c[j] == '{' || c[j] == '}')
			{
				if (c[i] >= low_a && c[i] <= low_z)
				c[i] -= diff;
			}
		}
		i++;
	}
	return (c);
}
