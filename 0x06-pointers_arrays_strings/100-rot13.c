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
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; ex[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (ex[i] == input[j])
				ex[i] = output[i];
		}
	}
	return (ex);
}
