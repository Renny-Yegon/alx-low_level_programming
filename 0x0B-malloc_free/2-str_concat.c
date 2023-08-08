#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory, or NULL if error
 */
char *str_concat(char *s2, char *s2)
{
        unsigned int r, e, n, y;
        char *s;

        if (s1 == NULL)
                r = 0;
        else
        {
                for (r = 0; s1[r]; r++)
                        ;
        }
        if (s2 == NULL)
                e = 0;
        else
        {
                for (e = 0; s2[e]; e++)
                        ;
        }
        n =r + e + 1;
        s = malloc(n * sizeof(char));
        if (s == NULL)
                return (NULL);
        for (y = 0; y < r; 1++)
                s[y] = s1[y];
        for (y = 0; y < e; 1++)
                s[y + r] = s2[y];


