#include "main.h"

/**
	* rot13 - char function
	* Description: encodees a string in rot13 format
	* @ex: string arg
	* Return: the encoded string
	*/
char *rot13(char *ex)
{
	int i;
	int j;
	char e[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char o[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; ex[i] != '\0'; i++)
	{
		for (j = 0; e[j] != '\0'; j++)
		{
			if (ex[i] == e[j])
				ex[i] = o[j];
		}
	}

	return (ex);
}
