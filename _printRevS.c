#include "main.h"

/*TODO Betty*/
_printRevS(va_list rev) {
	char *stringRev;
	int count = 0;
	int index = 0;

	stringRev = va_arg(rev, char *);

	while (stringRev[count] != '\0') {
		count++;
	}
	for (index = (count - 1); index >= 0; index--) {
		_putchar(stringRev[index]);
	}
	return (count);
}
