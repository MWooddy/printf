#include "main.h"

int _printOctal(va_list num) {
	unsigned int i, j, x, n = 0;
	char *str;

	i = va_arg(num, int);
	x = i;

	if (i == 0) {
		_putchar('0');
		return (1);
	}
	while (i > 0) {
		i /= 8;
		j++;
	}

	str = malloc(j * sizeof(int) + 1);

	if (str == NULL) {
		return (-1);
	}

	while (x > 0) {
		str[n] = (x % 8) + '0';
		x /= 8;
		n++;
	}

	while (n != 0) {
		n--;
		_putchar(str[n]);
	}
	free(str);
	return (j);
}
