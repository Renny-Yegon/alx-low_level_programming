#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of pointer
 * @size: size of each member
 * Return: pointer of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	_memset(ptr, 0, size * nmemb);
	return (ptr);
}

/**
 * _memset - fills memory with a constant byte
 * @m: memory area
 * @c: constant byte
 * @b: bytes of the memory area
 * Return: pointer to the memory area s
 */
char *_memset(char *m, char c, unsigned int b)
{
	char *ptr = m;

	while (b--)
		*m++ = c;
	return (ptr);
}
