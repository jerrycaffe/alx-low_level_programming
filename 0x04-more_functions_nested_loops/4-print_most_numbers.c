

#include"main.h"

/**
 * print_most_numbers - function to check if
 *           it is 2 or 4 n print
 *
 *
 * Return: returns 0 always
 *         
*/
void print_most_numbers(void)
{
	int num;
	num = 0;
	while (num <= 9)
		if (num != 2 && num != 4)
			_putchar(48 + num);
		num++;
	_putchar('\n');
}
