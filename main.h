#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAG */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt -struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int(*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - struct op
 */
int print_char(va_list types, char bufftter[],
	int flags, int width,int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, intr precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width
