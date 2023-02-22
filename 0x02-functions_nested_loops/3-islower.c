#include"main.h"

/**
 * _islower - check for lowercase
 *
 * @c:input in int
 * Return: returns 1 or always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
