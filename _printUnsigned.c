#include "main.h"

int _printUnsigned(va_list num) {
	unsigned int dec, count, n, i;
	int len = 0;

	n = va_arg(num, int);

	i = n;
	dec = n;
	count = 1;

	if (n == 0) {
		_putchar('0');
		return (1);
	}
	while (dec > 9) {
		dec /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10) {
		len += _putchar(((i / count) % 10) + '0');
	}
	return (len);
}
