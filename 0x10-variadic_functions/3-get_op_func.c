#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
	* get_op_func - int function pointer
	* Description: returns pointer to func that can handle var s
	* @s: passed operator
	* Return: pointer to the correct int func or NULL
	*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
