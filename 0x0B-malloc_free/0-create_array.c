#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Name of function
 * @size: size of array
 * @c: character to fill array
 * Return: Pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (i < (int)size)
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}
