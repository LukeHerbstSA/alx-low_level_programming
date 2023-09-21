#include "main.h"

/**
	* reverse_array - void function
	* Description: reverses assed array
	* @a:
	* @n:
	*/
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	if (n % 2 != 0)
	{
		n = (n - 1)/2;
		for (i = 0; i < n; i++)
		{
			tmp = a[i];
			a[i] = a[n * 2 - i];
			a[n * 2 - i] = tmp;
		}
	}
	else
	{
		for (i = 0; i < (n / 2); i++)
		{
			tmp = a[i];
                        a[i] = a[(n * 2) - i - 1];
                        a[(n * 2) - 1 - i] = tmp;
		}
	}
}
