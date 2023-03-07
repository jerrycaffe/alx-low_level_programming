/**
 * _memcpy - function that copies memory area
 *
 * @dest: destination
 * @src: value to copy
 * @n: n bytes
 *
 * Return: Always 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;

	while (i < n)
		dest[i] =src[i];
		i++;
	return (dest);
}
