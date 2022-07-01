#include "function_pointers.h"
#include "3-calc.h"
/**
 * get_op_func - Selects the correct function to perform
 *					the operation asked by the user.
 * @s: Character for the operator passed as argument
 *		to the program
 * Return: ops[N / 2].f
 **/
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

	int N = 0;

	while (N < 10)
	{
		if (s[0] == ops->op[N])
		{
			break;
		}
		N++;
	}
	return (ops[N / 2].f);
}
