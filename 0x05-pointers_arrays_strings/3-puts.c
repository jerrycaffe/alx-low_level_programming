#include "main.h"

/**
 * _puts - print strings n new line
 *
 * @str: 
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
