#include "main.h"

/*
 * *_strcat-cincatenates two string.
 * @dest:first string.
 * @src:second string.
 * Retrun:string dest.
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
