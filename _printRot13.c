#include "main.h"

int _printRot13(va_list R) {
	char *string;
	unsigned int i, x, counter = 0;
	char base[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char chng[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	string = va_arg(R, char *);

	if (string == NULL) {
		string = "(ahyy)";
	}

	i = 0;
	while (string[i] != '\0') {
		x = 0;
		while (base[x] != '\0') {
			if (base[x] == string[i]) {
				_putchar(chng[x]);
				counter++;
				break;
			}
			x++;
		}
		if (base[x] == '\0') {
			_putchar(string[i]);
			counter++;
		}
		i++;
	}
	return (counter);
}
