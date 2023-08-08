#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 *
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int r, e;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (r = 0; r < height; r++)
	{
		a[r] = (int *)malloc(sizeof(int) * width);
		if (a[r] == NULL)
		{
			for (e = 0; e < r; e++)
				free(a[e]);
			free(a);
			return (NULL);
		}
		for (e = 0; e < width; e++)
		{
			a[r][e] = 0;
		}
	}
	return (a);
}
