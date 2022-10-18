#include "main.h"

int _printP(va_list p) {
	char hexa[] = "0123456789abcdef";
	unsigned long int n = va_arg(p, unsigned long int);
	int a[20];
	int i = 0, count = 0;

	if (n == 0) {
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		return (5);
	}
	_putchar('0');
	_putchar('x');
	count += 2;
	for (i = 0; n > 0; i++) {
		a[i] = n % 16;
		n = n / 16;
		count++;
	}
	for (i -= 1; i >= 0; i--) {
		_putchar(hexa[a[i]]);
	}
	return (count);
}
