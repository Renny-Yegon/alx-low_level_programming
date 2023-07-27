#include "main.h"
/**
 *_strcmp - compares two strings.
 *@sa: pointer to first string.
 *@sb: pointer to second string.
 *
 *Return: value less than 0 if string is less than the other.
 *value greater than 0 if string is greater than the other.
 *0 if strings are equal.
 */
int _strcmp(char *sa, char *sb)
{
	int counter, cmpVal;

	counter = 0;
	while (sa[counter] == sb[counter] && sa[counter] != '\0')
	{
		counter++;
	}

	cmpVal = sa[counter] - sb[counter];
	return (cmpVal);
}
