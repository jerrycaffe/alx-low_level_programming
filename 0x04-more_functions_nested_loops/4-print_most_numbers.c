#include "main.h"

/**
 * print_most_numbers - print 0 - 9
 *             without 2 and 4
 *
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int num = 0;

	do {
		if (num != 2 || num != 4)
			_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
