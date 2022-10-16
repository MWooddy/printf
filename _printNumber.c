#include "main.h"

/*TODO BEtty*/
int _printNumber(va_list num) {
	unsigned int dec, count, i;
	int n, length = 0;

	n = va_arg(num, int);

	if (n < 0) {
		_putchar('-');
		length++;
		i = n * -1;
	} else {
		i = n;
	}
	dec = i;
	count = 1;

	while (dec > 9) {
		dec /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10) {
		length += _putchar(((i / count) % 10) + '0');
	}
	return (length);
}
