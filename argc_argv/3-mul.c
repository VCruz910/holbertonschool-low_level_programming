#include "main.h"
/**
 * main - Multiplies two numbers.
 * @argc: Variable for number of command arguments
 * @argv: Array for command arguments
 * Return: 0 (Success), 1 (Failure)
 **/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}

