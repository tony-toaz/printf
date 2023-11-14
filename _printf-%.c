#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - a function that gives output according to a format
 * @format: the string to be examined
 * Return: characters encountered
 */
int _printf(const char *format, ...)
{
	int count = 0;

	va_list val_list;

	va_start(val_list, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			format++;
			count++;
		}
		else
		{
			format++;
		}
		if (*format == '\0')
		{
			break;
			write(1, format, 1);
			format++;
			count++;
		}
	}

	va_end(val_list);
	return (count);
}
