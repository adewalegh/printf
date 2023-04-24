#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - function
 * @format: object
 *
 * Return: number of characters printed
 *
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	count = get_print(format, arg);

	va_end(arg);
	return (count);
}
