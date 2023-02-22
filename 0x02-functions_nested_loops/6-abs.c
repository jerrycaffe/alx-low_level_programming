#include "main.h"

/**
 * _abs - print the abs value
 *
 * @n: takes integer type input for function.
 *
 * Return: abs of a value
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-1) * n;		
	}
	else
	{
		return (n);
	}
}
