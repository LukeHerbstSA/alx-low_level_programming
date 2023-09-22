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
	int state;
	int count;

	state = 0;
	count = 0;
	while (*haystack != '\0')
	{
		while (*needle != '\0')
		{
			if (*needle == *(haystack + count))
				state = 1;
			if (needle[j] != *(haystack + count))
			{
				count = 0;
				break;
			}
			count++;
			needle++;
		}
		if (state == 1)
			return (haystack);
		haystack++;
	}
	return (0);
}
