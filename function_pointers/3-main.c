#include "function_pointers.h"
#include "3-calc.h"
/**
 * main- Contains the main function
 * @argc: Argument Count.
 * @argv: Argument Vector.
 * Return: 0 (Success).
 **/
int main(int argc, char *argv[])
{
	int a, b;
	int (*Calculate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	Calculate = get_op_func(argv[2]);
	if (Calculate == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", Calculate(a, b));
	return (0);
}
