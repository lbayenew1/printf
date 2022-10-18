#include "main.h"

/**
 * write_char - write character c to stdout
 * @c: character
 * Return: 1 on success
 * On error: -1
 */
int write_char(char c)
{
	return (write(1, &c, 1));
}
