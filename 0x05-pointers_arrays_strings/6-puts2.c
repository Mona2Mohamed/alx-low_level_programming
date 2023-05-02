#include "main.h"

/**
 *puts2-print every character.
 *@str:input string.
 *Return: no return.
 */

void puts2(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		if (str[l] % 2 == 0)
			_putchar(str[l]);
	}
	_putchar('\n');
}
