#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct convert - define operator and function
 * @op: operator
 * @f: point to function
 */
struct convert
{
	char *op;
	int (*f)(va_list);
};
typedef struct convert conv;
int parser(const char *format, conv f_list[], va_list arg_list);
int write_char(char c);
int print_char(va_list);
int print_percent(va_list);
int print_string(va_list);
int _printf(const char *format, ...);
#endif
