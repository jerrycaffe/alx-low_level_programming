#include "main.h"

/*
 * _strcat -Add two strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: strings
 *
 */

char *_strcat(char *dest, char *src)
{
	char *result = strcat(dest, src);
	return result;
}

char *str1 = "Hello ";
char *str2 = "World";
_strcat(str1, str2);
