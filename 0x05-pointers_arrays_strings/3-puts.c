#include "main.h"

/**
 * _puts - print strings n new line
 *
 * @str: This is input
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		++str;
	}
	putchar('\n');
}
