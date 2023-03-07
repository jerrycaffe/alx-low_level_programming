/**
 * _memset - fills memory with a k byte
 *
 * @s: pointer to char type
 * @b: input variable of char type
 * @n: unsigned int variable
 *
 * Return: A pointer to the filled memory
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;

	return (s);
}
