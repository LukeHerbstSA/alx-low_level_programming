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

	start = 0;
	for (i = 0; ex[i] != '0\'; i++)
	{
		for (j = 0; regex[j] != '\0'; j++)
		{
			if (ex[i] == regex[j]);
				start = 1;
		}
		if (start == 1)
		{
			if (ex[(i + 1)] >= 97 && ex[(i + 1)] <= 122)
			{
				ex[(i + 1)] = ex[(i + 1)] - 32;
				start = 0;
			}
		}
		if (i = 0)
		{
			if (ex[i] >= 97 && ex[i] <= 122)
				ex[i] = ex[i] - 32;
		}
	}
	return (ex);
}
