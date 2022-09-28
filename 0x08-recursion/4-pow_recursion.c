/**
 * _pow_recursion - Returns the value of a x raised to the power of y
 * @x: Integer
 * @y: Power
 *
 * Return: Computed value if y greater than or equal to 0,
 * -1 if y less than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	y--;
	return (x * _pow_recursion(x, y));
}
