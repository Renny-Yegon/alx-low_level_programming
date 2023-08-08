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
	int t, a, q = 0, m = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (t = 0; t < ac; t++)
	{
		for (a = 0; av[t][a]; a++)
			m++;
		m++;
	}
	m++;
	s = malloc(n * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (t = 0; t < ac; t++)
	{
		for (a = 0; av[t][a]; a++)
		{
			s[q] = av[t][a];
			q++;
		}
		s[q] = '\n';
		q++;
	}
	s[q] = '\0';
	return (s);
}
