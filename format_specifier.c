#include "main.h"

/**
 * print_char - print character
 * @list: list of argument
 * Return: number of character
 */
int print_char(va_list list)
{
	write_char(va_arg(list, int));
	return (1);
}
/**
 * print_string - print string
 * @list: list of argument
 * Return: number of character will be printed
 */
int print_string(va_list list)
{
	int i;
	char *s;

	s = va_arg(list, char*);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		write_char(s[i]);
	return (i);
}
/**
 * print_percent - print percent symbol
 * @list: list of argument
 * Return: number of character will be printed
 */
int print_percent(va_list list)
{
	(void) list;
	write_char('%');
	return (1);
}
/**
 * print_integer - print integer
 * @list: list of argument
 * Return: length of integer
 */
int print_integer(va_list list)
{
	int num_len;

	num_len = print_number(list);
	return (num_len);

}
/**
 * unsigned_integer - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numbers
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (print_unsgined_number(num));
	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}
