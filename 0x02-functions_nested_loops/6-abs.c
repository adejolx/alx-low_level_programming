/**
 * _abs - computes the absolute value of an integer
 * @n: the integer which its absolute value is to be computed
 * Return: the absolute value of n
*/
int _abs(int n)
{
	int neg_sign = -1;

	if (n < 0)
	{
		return (n * neg_sign);
	}
	return (n);
}
