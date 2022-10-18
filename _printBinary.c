#include "main.h"

int _printBinary(va_list b)
{
	unsigned int n = va_arg(b, unsigned long int);
	unsigned int a[1024];
	int i = 0,x = 0;

	if (n == 0)
	{
		_putchar('0');
		x++;
	}
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
		x++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(a[i] + '0');
	}
	return (x);
}
