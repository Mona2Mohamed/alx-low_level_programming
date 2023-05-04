#include "main.h"

/*
*  _strcat-function that concatenates
*  	two string
*
* @dest: pointer to destenation input
* @src: pointer to sourse input
*
* Retrun: pointer to evaluating string @dest.
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
