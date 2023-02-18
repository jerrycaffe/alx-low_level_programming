#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, last_digit);
	}
	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, last_digit);
	}
	if (last_digit < 6)
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
