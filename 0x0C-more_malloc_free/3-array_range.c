#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max: max int
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int len, r;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (r = 0; r < len; r++)
		ptr[r] = min++;
	return (ptr);
}
