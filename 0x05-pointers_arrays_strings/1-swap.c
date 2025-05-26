/**
 * swap_int - a function that swaps the values of two integers
 * @a: first number to swap
 * @b: second number to swap
 * Return: (0) Always
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

