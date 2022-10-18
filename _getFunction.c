/*Header File*/
#include "main.h"

/*Need TODO Betty*/

/*Gets the specific function related to the
format specifer*/
int (*_getFunction(char format))(va_list)
{
	int count1 = 0;

	_dataStruct identifier[] = {
		{'b', _printBinary},
		{'c', _printChar},
		{'d', _printNumber},
		{'i', _printNumber},
		{'o', _printOctal},
		{'p', _printP},
		{'r', _printRevS},
		{'R', _printRot13},
		{'u', _printUnsigned},
		{'s', _printString},
		{'S', _printS},
		{'x', _printHexLower},
		{'X', _printHexUpper},
		{'\0', NULL}
	}

	while (identifier[count1].symb != '\0')
	{
		if (format == identifier[count1].symb)
		{
			return (identifier[count1].func);
		}
		count1++;
	}
	return (NULL);
}
