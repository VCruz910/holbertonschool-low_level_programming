#include "main.h"
/**
 * factorial - Returns the factorial of agiven number
 * @n: Variable for number.
 * Return: n * factorial(n-1) success, -1 failure.
 **/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
