/**
 * factorial - Returns the factorial of a given number
 * @n: Number to operate on
 *
 * Return: Computed value if n greater than or equal to 0,
 * -1 if n less than 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
