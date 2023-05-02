#include "main.h"
#include <stdio.h>

/*
*_strlen-return the length of a string
*@s:String pointer to return the length of variable
*Retrun:int
*/

int _strlen(char *s)
{
	int p = 0;
	while (*(s+p) != 0)
	{
		p ++;
	}
	return p;
}
