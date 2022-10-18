#include "main.h"

int _printHexUpper(va_list num) {
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
			str[n] = (m % 16) - 10 + 'A';
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

int _printHexAux(unsigned long n) {
	int i = 0, counter = 0, rest;
	char hexas[100];

	if (n == 0) {
		_putchar('0');
		return (1);
	}
	while (n != 0) {
		rest = n % 16;
		if (rest < 10) {
			rest = rest + 48;
		} else {
			rest = rest + 87;
		}

		hexas[i] = rest;
		i++;
		n = n / 16;
	}
	for (i = i - 1; i >= 0; i--) {
		_putchar(hexas[i]);
		counter++;
	}
	return (counter);
}
