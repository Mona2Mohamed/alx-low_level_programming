#include "main.h"

/*
 * rev_string-reverse the string
 * @s:input string
 * Retrun: no return
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
