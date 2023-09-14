#include "main.h"

/**
	* _isupper - int function
	* @c: int type
	* Return: 1 if true, 0 if not
	*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
