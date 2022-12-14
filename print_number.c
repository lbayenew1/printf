#include "main.h"

/**
 * print_number - print a number
 * @args: list of argument
 * Return: the number of argument printed
 */
int print_number(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n = va_arg(args, int);
	div = 1;
	len = 0;
	if (n < 0)
	{
		len += write_char('-');
		num = n * -1;
	}
	else
		num = n;
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		len += write_char('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
/**
 * print_unsgined_number - Prints an unsigned number
 * @n: unsigned integer to be print
 * Return: The amount of numbers printed
 */
int print_unsgined_number(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;
	num = n;
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		len += write_char('0' + num / div);
		num = num % div;
		div /= 10;
	}
	return (len);
}
