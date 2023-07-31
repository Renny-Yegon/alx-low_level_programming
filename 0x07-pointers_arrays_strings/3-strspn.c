#include "main.h"

/**
 * _strpbrk - Locates the first occurrence in the string s of any of the bytes in accept.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing bytes to search for.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
