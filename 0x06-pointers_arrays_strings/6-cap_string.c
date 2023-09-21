#include "main.h"

/**
	* cap_string - return char
	* Description: first letter of words to uppercase
	* @ex: char array
	* Return: the updated array (ex)
	*/
char *cap_string(char *ex)
{
	int i;
	int j;
	char regex[] = ",;.!?(){}\" \t\n";
	int start;

	start = 0;
	for (i = 0; ex[i] != '\0'; i++)
	{
		for (j = 0; regex[j] != '\0'; j++)
		{
			if (regex[j] == ex[i])
				start = 1;
		}
		if (ex[i] >= '97' && ex[i] <= '122')
		{
			if (start == 1)
				ex[i] = ex[i] - 32;
				start = 0;
		}
	}
	return (ex);
}
