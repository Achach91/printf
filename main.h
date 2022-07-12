#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct convert - A convert struct
 * @type: First member
 * @func: Second member
 * Description: Define a new type struct } converter
 */
struct convert
{
	char *type;
	int (*func)();
};

/**
 * converter - Typedef for struct convert
 */
typedef struct convert converter;

int _putchar(int ch);
int _printf(const char *format, ...);


#endif
