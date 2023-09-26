#include "main.h"

/**
	* _strstr - char function
	* Description: returns pointer to first occurence
	* @haystack: string to search through
	* @needle: substring
	* Return: char ar
	*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *ptr;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i][j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			ptr = &haystack[i];
			return (ptr);
	}
	return (0);
}
