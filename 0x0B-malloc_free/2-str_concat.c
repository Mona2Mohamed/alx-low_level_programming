#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int count, i;
	int *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = count = 0;
	while (s[i] != '\0')
		i++;
	while (s2[count] != '\0')
		count++;

	arr = malloc(sizeof(char) * (i + count + 1));

	if (arr == NULL)
		return (NULL);
	i = count = 0;
	while (s1[i] != '\0')
	{
		arr[i] = s[i];
		i++;
	}
	while (s2[count] != '\0')
	{
		arr[i] = s2[count];
		i++, count++;
	}
	arr[i] = '\0';
	return (arr);
}
