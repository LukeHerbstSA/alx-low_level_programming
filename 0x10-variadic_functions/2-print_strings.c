#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
	* print_strings - void function
	* Description: prints passed strings with passed separator
	* @separator: passed string to be placed inbetween strings
	* @n: number of args
	*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int sepstate;
	va_list printer;
	unsigned int i;

	va_start(printer, n);
	sepstate = 0;

	if (n == 0)
		return;
	if (separator == NULL)
		sepstate = 1;
	for (i = 0; i < n; i++)
	{
		if (va_arg(printer, char *) == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", va_arg(printer, char *));
		if (i == n - 1)
		{
			putchar('\n');
			va_end(printer);
			return;
		}
		if (sepstate == 0)
			printf("%s", separator);
	}
}
