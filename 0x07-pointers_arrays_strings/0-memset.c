#include "main.h"

/**
	* _memset - char function
	* Description: returns s with n elements overwritten via b
	* @s: passed array
	* @b: byte that will overwrite elements in s
	* @n: of bytes / elements to be replaced
	* Return: updated array b
	*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return(s);
}
