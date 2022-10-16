/* Defining header file , putting it in and ifdefine/endif
#ifndef MAIN_H
#define MAIN_H
*/

/* Libaries
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
*/

/*Struct*/
/*
typedef struct _dataFormat
{
char symbol;
int (*func)(va_list);
} _infoStructure;
*/

/* prototypes for _printf functions */
int _printf(const char *format, ...); /*Provided Proto Function*/
int _printChar( /*need to think thr arguments to pass*/);
int _printString( /*need to think thr arguments to pass*/);
int _printNumber( /*need to think thr arguments to pass*/);
int _printRot13( /*need to think thr arguments to pass*/);
int _printRevS( /*need to think thr arguments to pass*/);


/*#endif*/
