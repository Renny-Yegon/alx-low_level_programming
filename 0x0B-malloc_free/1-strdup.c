#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	unsigned int r, e;
	char *s;

	if (str == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		;
	r++;
	s = malloc(r * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (e = 0; e < r; e++)
	{
		s[e] = str[e];
	}
	return (s);
}
