#include "main.h"

/**
 * _printf - print the character
 * @format: a string
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;

	conv f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
