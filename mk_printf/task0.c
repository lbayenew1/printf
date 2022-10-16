#include "main.h"

/**
 * _printf - print
 * @format: string
 * Return: 0 on successs
 */
int _printf(const char *format, ...)
{
	int len = strlen(format);
	int i;
	char *s;
	va_list arg;

	for (i = 0; i < len; i = i + 2)
	{
		va_start(arg, format);
		if (s == "%c")
			printf("%c\n", va_arg(arg, char);
		else
			printf("%s\n", va_arg(arg, char*);
	}
	va_end(arg);
	return (0);
}
