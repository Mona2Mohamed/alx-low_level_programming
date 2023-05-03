#include "main.h"

/*
*print_array-print element of array.
*@a:integer pointer
*@n: integer varibale
*Return : no return.
*/


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf(%d, a[i]);
	}
	_putchar('\n');
}
