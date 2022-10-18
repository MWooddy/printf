/* Defining header file , putting it in and ifdefine/endif*/
#ifndef _MAIN_H_
#define _MAIN_H_
#define BUFFER_SIZE 1024
#define NULL ((void *)0)

/* Libaries*/
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>

/*Struct*/
typedef struct _dataFormat
{
	char symb;
	int (*func)(va_list);
} _dataStruct;

/* prototypes for _printf functions */
int _printf(const char *format, ...);
int (*_getFunction(char format))(va_list);
int _printBinary(va_list b);
int _printChar(va_list c);
int _printNumber(va_list i);
int _printRevS(va_list rev);
int _printRot13(va_list R);
int _printHexLower(va_list x);
int _printHexUpper(va_list X);
int _printHexAux(unsigned long n);
int _printOctal(va_list o);
int _printString(va_list s);
int _printUnsigned(va_list num);
int _printS(va_list S);
int _printP(va_list p);
int _putchar(char c);


#endif
