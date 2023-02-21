#include "main.h"

/**
 * main - Print putchar
 *
 * Return: Always 0.
 */

void printPutChar()
{
    char puttie[] = "_putchar";

    for (int count = 0; count < strlen(puttie); count++)
    {
        putchar(puttie[count]);
    }
    putchar('\n');
}

int main(void)
{
    printPutChar();
    return (0);
}
