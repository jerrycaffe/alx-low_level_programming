#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints printPutChar using prototype
 *
 * Return: Always 0 (Success)
*/
void printPutChar(void)
{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
}
/**
 * main - Entry point
 *
 * Description: prints printPutChar using putchar prototype
 *
 * Return: Always 0 (Success)
*/
int main(void)
{

	printPutChar();
	putchar('\n');
	return (0);
}
