#include "main.h"

/**
 * print_numbers - print 0 - 9
 *             only using _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int i;
	i = 0;

	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
