#include <stdio.h>

/**
 * main - Prints all Numbers of single digits of base ten from 0 with line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
