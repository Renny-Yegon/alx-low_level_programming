#include "main.h"
/**
 *reverse_array - revereses an array.
 *@p: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *p, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = p[counter];
		p[counter++] = p[n];
		p[n--] = temp;
	}
}
