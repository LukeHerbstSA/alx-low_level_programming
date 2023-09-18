#include "main.h"

/**
	* rev_string - void function
	* Description: reverses a string
	* @s: passed pointer to array
	*/
void rev_string(char *s)
{
	int i;
	int j;
	int length;
	char nrml;

	j = -1;
	length = strlen(s) - 1;
	for (i = 0; i < length / 2; i++)
	{
		nrml = s[i];
		s[i] = s[j];
		s[j] = nrml;
		j--;
	}
}
