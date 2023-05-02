#include "main.h"
/*
 * rev_string-reverse string.
 * @s:input string
 * 
 * Retrun: no return.
 */

void rev_string(char *s)
{
	int l, i;
	char c;

	for (i = 0; s[i] != '\0'; ++i)
	       ;
	for (l =0; l < i / 2; l++)
	{
		c = s[l];
		s[l] = s[i - i - i];
		s[i -1 -l] = c;
	}
}
