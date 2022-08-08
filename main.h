#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
* struct specifier - struct to store conversion specifier and function
* @a: conversion character
* @f: function associated with conversion specifier
*/
typedef struct specifier
{
	char a;
	void (*f)(va_list *args, int *r_len);
} spec_t;
int _putchar(char c);
int _strlen(const char *s);
void print_null(void);
void print_string(char *s);
void print_decimal(int d, int *r_len);
void op_char(va_list *args, int *r_len);
void op_string(va_list *args, int *r_len);
void op_percent(va_list *args, int *r_len);
void op_decimal(va_list *args, int *r_len);
int _printf(const char *format, ...);
#endif
