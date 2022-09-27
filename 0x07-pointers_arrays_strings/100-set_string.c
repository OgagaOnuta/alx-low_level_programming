/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to pointer
 * @to: Pointer to character
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = &*to;
}
