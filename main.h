#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

int _putchar(char c);
int print_char(va_list args);
int print_strings(va_list args);
int _printf(const char *format, ...);

int print_decim(va_list args);
int print_int(va_list args);
#endif
