#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of arguments
 * @separator: string separator
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	register unsigned int r;
	va_list arguments;
	char *str;

	va_start(arguments, n);
	for (r = 0; r < n; r++)
	{
		str = va_arg(arguments, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && !r)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(arguments);

}
