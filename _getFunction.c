/*Header File*/
#include "main.h"

/*Need TODO Betty*/

/*Gets the specific function related to the
format specifer*/
int (*getFunction(char formatS))(va_list)
{
	int counter1 = 0;

/*A struct of array that links the function to
format specifier*/
	_infoStructure specifer[] = {
		{'c', _printChar},
		{'s', _printString},
		{'i', _printNumber},
		{'d', _printNumber},
		{'r', _printRevS},
		{'R', _printRot13},
		{'\0', NULL}
		/*{'b', TODO},*/
		/*{'u', TODO},*/
		/*{'o', TODO},*/
		/*{'x', TODO},*/
		/*{'X', TODO},*/
	};
	/*cycle through the array to find the specific
	specifier*/
	while (specifer[counter1].symbol != '\0')
	{
		if (formatS == specifer[counter1].symbol)
		{
			/*when the condition is met return specific function*/
			return (specifer[counter1].func);
		}
		counter1++;
	}
	return (NULL);
}
