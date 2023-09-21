#include "main.h"

/**
	* cap_string - return char
	* Description: first letter of words to uppercase
	* @ex: char array
	* Return: the updated array (ex)
	*/
char *cap_string(char *ex)
{
	char regex[] = ",;.!?\n\t\" (){}";
	int i;
	int j;
	int start;

	for (i = 0; start = 0; ex[i] != '0\'; i++)
	{
		if (start == 1)
		{
			if (ex[i] >= 97 && ex[i] <= 122)
			{
				ex[i] = ex[i] - 32;
				start = 0;
			}
		}
		for (j = 0; regex[j] != '\0'; j++)
		{
			if (regex[j] == ex[i])
				start = 1;
		}
		if (i = 0)
			ex[i] = ex[i] - 32;
	}
	return (ex);
}
