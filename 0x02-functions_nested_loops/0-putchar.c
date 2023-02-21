#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

    char puttie[] = "_putchar";

    for (int count = 0; count < strlen(puttie); count++)
    {
        putchar(puttie[count]);
    }
    putchar('\n');

    return (0);
}
