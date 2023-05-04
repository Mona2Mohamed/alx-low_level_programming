#include "main.h"

/*
 * *_strcat-cincatenates two string.
 * @dest:first string.
 * @src:second string.
 * Retrun:string dest.
 */

char *_strcat(char *dest, char *src);
{
	int i;
	int x;
	char a[];

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		if (*(dest + i) == '\0')
			_putchar(" ");
		else
		{
			a[i] = *(dest + i);
			_putchar(*(dest + i));
		}
	}
	int y;

	y = i;
	for (x = 0; *(src + x) != '\0'; x++)
	{
		if (*(src + x) == '\0')
			_putchar(" ");
		else
		{
			a[i + y] = *(src + x);
			_putchar(*(src + x));
		}
	}
	*dest = *a;
	_putchar('\n');
	return (*dest);
}
