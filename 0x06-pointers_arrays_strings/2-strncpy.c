#include "main.h"

/*
 * _strncpy - function that copies a string.
 *
 * @dest:input pointer to destenation
 * @src:input pointer to source
 * @n:input number of byte
 *
 * Return : destrnation dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;
	int i;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];


	return (dest);
}
