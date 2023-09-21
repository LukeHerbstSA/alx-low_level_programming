#include "main.h"

/**
	* leet - char function
	* Description: encodes strings in leet format
	* @ex: string / array
	* Return: returns leet encoded string
	*/
char *leet(char *ex)
{
	int  i;
	int j;
	char alpha[] = "AaEeOoTtLl";
	char leet[] = "4433007711";

	for (i = 0; ex[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (alpha[j] == ex[i])
				ex[i] = leet[j];
		}
	}
	return (ex);
}
