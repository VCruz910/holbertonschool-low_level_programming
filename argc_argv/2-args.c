#include "main.h"
/**
 * main - Prints all argument it recieves.
 * @argc: Variable for number of commands
 * @argv: Array for arguments
 * Return: 0 (Success)
 **/
int main(int argc, char *argv[])
{
	int AllArg;

	for (AllArg = 0; AllArg < argc; AllArg++)
	{
		printf("%s\n", argv[AllArg]);
	}
	return (0);
}
