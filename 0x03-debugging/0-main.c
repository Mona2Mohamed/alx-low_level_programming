#include "main.h"

/**
* main - Test function for positive or negative
* Return: 0
*/

int main(void)
{
int n;
n = 0;
positive_or_negative(n);
return (0);
}
void positive_or_negative(int n)
{
srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
