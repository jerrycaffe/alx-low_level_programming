/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to string array
 * @c: character to be located
 *
 * Return: first occurence of charatcer or null
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return ('\0');
}
