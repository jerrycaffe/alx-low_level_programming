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

	for (count = 0; *s != '\0'; ++s)
		++count;
	return (count);
}
