#include "main.h"
/**
 * main - Adds positive numbers
 * @argc: Variable for number of command arguments
 * @argv: Array of command line arguments
 * Return: 0 (Success), 1 (Failure)
 **/
int main(int argc, char *argv[])
{
	int Pos1, Pos2, Add = 0;

	for (Pos1 = 1; Pos1 < argc; Pos1++)
	{
		for (Pos2 = 0; argv[Pos1][Pos2] != '\0'; Pos2++)
		{
			if (!isdigit(argv[Pos1][Pos2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		Add += atoi(argv[Pos1]);
	}
	printf("%d\n", Add);
	return (0);
}
