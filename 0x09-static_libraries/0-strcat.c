#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */


char *_strcat(char *dest, char *src)
{
	int i, x;

	x = 0;

	while (dest[x])
		x++;

	for (i = 0; src[i]; i++)
		dest[x++] = src[i];

	return (dest);
}
