#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
	* print_numbers - void function
	* Description: prints passed ints with the passed separator
	* @separator: string to be printed inbetween int args
	* @n: number of passed ints
	*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printer;
	unsigned int i;
	int sepstate;
	int invoker;

	va_start(printer, n);

	sepstate = 0;
	if (n == 0)
		return;
	if (separator == NULL)
		sepstate = 1;
	for (i = 0; i < n; i++)
	{
		invoker = va_arg(printer, int);

		if (i == n - 1)
		{
			printf("%d\n", invoker);
			va_end(printer);
			return;
		}
		else if (sepstate == 0)
			printf("%d%s", invoker, separator);
		else
			printf("%d", invoker);
	}
}
