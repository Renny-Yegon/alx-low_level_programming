#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory, or NULL if error
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, e, n, r;

	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		e = 0;
	else
	{
		for (e = 0; s2[e]; e++)
			;
	}
	n = i + e + 1;
	s = malloc(n * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (r = 0; r < i; r++)
		s[r] = s1[r];
	for (r = 0; r < e; r++)
		s[r + i] = s2[r];
	s[i + e] = '\0';
	return (s);
}
