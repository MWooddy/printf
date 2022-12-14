#include "main.h"

int _printS(va_list S) {
	unsigned int i;
	unsigned long b;
	int counter = 0;
	char *string;

	string = va_arg(S, char *);

	if (string == NULL) {
		string = "(null)";
	}
	while (string[i] != '\0') {
		if ((string[i] < 32 && string[i] > 0) || string[i] >= 127) {
			_putchar('\\');
			_putchar('x');
			counter += 4;

			if (string[i] < 16) {
				_putchar('0');
			}
			b = (unsigned long)string[i];
			_printHexAux(b);
		} else {
			_putchar(string[i]);
			counter++;
		}
		i++;
	}
	return (counter);
}
