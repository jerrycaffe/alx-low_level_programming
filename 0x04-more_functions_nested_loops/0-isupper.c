#include "main.h"

/**
 * _isupper - checks upper case
 *
 *@c: input value
 *
 *
 * Returns: 1 if upper or 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
