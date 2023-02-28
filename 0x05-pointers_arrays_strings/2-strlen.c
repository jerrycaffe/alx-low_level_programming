#include "main.h"

/**
 * _strlen - computer the length
 *
 * @s: string input
 *
 * Return: Length of string.
 */

int _strlen(char *s)
{
	int count;
	count = 0;

	for (count; *s != '\0'; ++s)
		++count;
	return (count);
}
