#include "main.h"

/**
 * print_rev - print in reverse
 *
 * @s: input value
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; ++count);

	for(--count; count >= 0; --count)
		putchar(s[count]);
	putchar('\n');
}
