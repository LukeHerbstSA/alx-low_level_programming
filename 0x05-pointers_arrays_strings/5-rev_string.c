#include "main.h"

/**
	* rev_string - void function
	* Description: reverses a string
	* @s: passed pointer to array
	*/
void rev_string(char *s)
{
	int i;
	int length;
	int temp;

	length = strlen(s);
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1];
		s[length - 1] = temp;
	}
}
