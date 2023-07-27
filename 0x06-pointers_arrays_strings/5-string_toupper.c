#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@p: pointer to string.
 *
 *Return: pointer to uppercase string.
 */
char *string_toupper(char *p)
{
	int length;

	length = 0;

	while (p[length] != '\0')
	{
		if (p[length] >= 97 && p[length] <= 122)
		{
			p[length] = p[length] - 32;
		}
		length++;
	}
	return (p);
}
