#include"main.h"

/**
 * _isalpha - function to check if
 *           character is lowercase
 *
 * @c: input of type int
 *
 * Return: returns 1 lower,alpha,upper
 *         otherwise always 0 (Success)
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
