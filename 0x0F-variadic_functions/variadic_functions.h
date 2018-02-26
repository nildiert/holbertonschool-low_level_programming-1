#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print_type - structure for different types
 * @ro: formatted character c,i,f,s
 * @f: function pointer to list
 *
 */
typedef struct print_type
{
	char *ro;
	void (*f)(va_list); /* function pointer */
} pt_t;

void print_c(va_list risuto);
void print_i(va_list risuto);
void print_f(va_list risuto);
void print_s(va_list risuto);

#endif
