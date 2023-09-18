#include "main.h"

/**
	* rev_string - void function
	* Description: reverses a string
	* @s: passed pointer to array
	*/
void rev_string(char *s)
{
	int i;
	float length;
	char nrml;
	char revrs;

	j = -1;
	length = strlen(s)/2;
	for (i = 0; i < length; i++)
	{
		nrml = s[i];
		revrs = s[j];

		s[i] = revrs;
		s[j] = nrml;
		j = j - 1;
	}
	putchar('\n');
}
