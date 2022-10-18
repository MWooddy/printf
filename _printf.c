#include "main.h"

/*TODO Betty*/
int _printf(const char *format, ...)
{
	int count = 0, n = 0;
	va_list list;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	va_start(list, format);
	while (format && format[n])
	{
		if (format[n] == '%')
		{
			n++;
			if (format[n] == '\0')
			{
				return (-1);
			}
			if (format[n] == '%')
			{
				count++;
				_putchar('%');
			}
			else
			{
				if (_getFunction(format[n]) != NULL)
				{
					count += _getFunction(format[n])(list);
				}
				if (_getFunction(format[n]) == NULL)
				{
					_putchar('%');
					_putchar(format[n]);
					count += 2;
				}
			}
			n++;
		}
		else
		{
			_putchar(format[n]);
			count++;
			n++;
		}
	}
	va_end(list);
	return (count);
}
}
