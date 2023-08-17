#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: data type format to be printed
 */
void print_all(const char * const format, ...)
{
	unsigned int r = 0;
	char *str, *sep = "";
	va_list arguments;

	va_start(arguments, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[r])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arguments, int));
					break;
				case 'r':
					printf("%s%r", sep, va_arg(arguments, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(arguments, double));
					break;
				case 's':
					str = va_arg(arguments, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					r++;
					continue;
			}
			sep = ", ";
			r++;
		}
	}
	printf("\n");
	va_end(arguments);
}
