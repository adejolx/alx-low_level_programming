/**
 * _strcmp - compares two strings
 * @s1: The string to be compared against
 * @s2: The string to compare
 * Return: an integer < 0 if s1 < s2, or an integer == 0
 * if s1 == s2 or an integer > 0 if s1 > s2
*/
int _strcmp(char *s1, char *s2)
{
	int res = 0, len = 0;

	while (s1[len] || s2[len])
	{
		res = s1[len] - s2[len];
		if (res != 0)
		break;
		len++;
	}
	return (res);
}
