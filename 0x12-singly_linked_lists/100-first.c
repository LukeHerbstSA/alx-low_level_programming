#include "lists.h"

inline void printer(void);

/**
	* main - void
	* Description: calls printer
	* Return: Always 0 (Success)
	*/
int main(void)
{
	printer();
	return (0);
}
/**
	* printer - inline func
	* Description: prints set string faster than main
	*/
inline void printer(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
