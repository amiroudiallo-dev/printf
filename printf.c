#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++; /* Move to the character after '%' */

			switch (*format)
			{
			case 'c':
				count += write(1, va_arg(args, int), 1);
				break;
			case 's':
				count += write(1, va_arg(args, char *), 1);
				break;
			case '%':
				count += write(1, "%", 1);
				break;
			default:
				count += write(1, "%", 1);
				count += write(1, format, 1);
				break;
			}
		}
		else
		{
			count += write(1, format, 1);
		}

		format++;
	}

	va_end(args);

	return count;
}

int main(void)
{
	_printf("Hello, %c World! %s %%%c\n", 'C', "Custom printf", '!');
	return (0);
}
