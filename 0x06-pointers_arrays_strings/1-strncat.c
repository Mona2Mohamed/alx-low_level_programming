#include "main.h"

/**
* _strncat - concatenates two strings
* @dest:input value
* @src:input value
* @n:input number of byte
* Return:void
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	x = 0;

	while (dest[x])
		x++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[x + i] = src[i];

	dest[c + i] = '\0';
	return (dest);
}
