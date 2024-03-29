#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - select the correct operation function asked by user
 * @s: operator argument
 * Return: function pointer corresponding to operator given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int r = 0;

	while (ops[r].op != NULL && *(ops[r].op) != *s)
		r++;
	return (ops[r].f);
}
