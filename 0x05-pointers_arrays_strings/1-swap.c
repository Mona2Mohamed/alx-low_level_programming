#include "main.h"

/*
 * swap_int-Swaps the value of two integers
 * @a:First argument to be swapped
 * @b:second argument to be swapped
 * Return:void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
