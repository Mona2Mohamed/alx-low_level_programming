#include "main.h"


/**
* _puts - prints a string, followed by a new line.
* @str: input string.
* Return: no return.
*/

void _puts(char *str)
{
	int p = 0;

	while (str[p] >= 0)
	{
		if (str[p] == '\0')
		{
			_putchar('\n');
			break;
		_putchar(str[p]);
		p++;
	}
}
