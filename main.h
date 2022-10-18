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
int write_char(char);
int print_integer(va_list);
int print_char(va_list);
int print_percent(va_list);
int print_string(va_list);
int _printf(const char *format, ...);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
/*write our own functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);
#endif
