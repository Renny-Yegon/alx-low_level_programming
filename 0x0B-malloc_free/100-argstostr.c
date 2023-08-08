#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: double pointer to arguments
 *
 * Return:pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
	int e, b, c = 0, d = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (e = 0; e < ac; e++)
	{
		for (b = 0; av[e][b]; b++)
			d++;
		d++;
	}
	d++;
	s = malloc(n * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (e = 0; e < ac; e++)
	{
		for (b = 0; av[e][b]; b++)
		{
			s[c] = av[e][b];
			c++;
		}
		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
