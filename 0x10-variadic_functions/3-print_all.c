#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
	* print_all - void function
	* Description: prints every argument passed
	* @format: list of types passed
	*/
void print_all(const char * const format, ...)
{
	va_list printer;
	int i;
	int elements;

	va_start(printer, format);
	if (format == NULL)
		return;
	while (i < sizeof(format) - 1)
	{
		switch (format[i])
		{
			case 'c':
			{
				printf("%c", va_arg(printer, int));
				break;
			}
			case 'i':
			{
				printf("%d", va_arg(printer, int));
				break;
			}
			case 'f':
			{
				printf("%f", va_arg(printer, double));
				break;
			}
			case 's':
			{
				if (va_arg(printer, char *) != NULL)
					printf("%s", va_arg(printer, char *));
				else
					printf("(nil)");
			}
		}
		if (format[i] != elements - 1)
			printf(", ");
		i++;
	}
	putchar('\n');
	va_end(printer);
}
