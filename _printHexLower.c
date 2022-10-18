#include "main.h"

int _printHexLower(va_list num) {
	unsigned int i, aux, m, n = 0;
	char *str;

	i = va_arg(num, int);
	m = i;

	if (i == 0) {
		_putchar('0');
		return (1);
	}
	while (i > 0) {
		i /= 16, aux++;
	}
	str = malloc(aux * sizeof(int) + 1);
	if (str == NULL) {
		return (-1);
	}
	n = 0;
	while (m > 0) {
		if ((m % 16) <= 9) {
			str[n] = (m % 16) + '0';
		} else {
			str[n] = (m % 16) - 10 + 'a';
		}
		m /= 16, n++;
	}
	while (n != 0) {
		n--;
		_putchar(str[n]);
	}
	free(str);
	return (aux);
}
