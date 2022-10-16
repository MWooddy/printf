#include"main.h"

/*TODO Betty*/
int _printString(va_list s)
{
	int index1, index2;
	char *string1;
	char *string2 = "(null)";

	string1 = va_arg(s, char *);

	if (string1 == NULL) {
		for (index2 = 0; string2[index2] != '\0'; index2++) {
			_putchar(string2[index2]);
		}
		return (6);
	}
	for (index1 = 0; string1[index1] != '\0'; index1++) {
		_putchar(string1[index1]);
	}
	return (index1);
}

